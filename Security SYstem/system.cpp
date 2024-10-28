#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    int a;
    string text, oldPassword, password1, password2, pass, name, password0, age, user;
    string creds[3], cp[3];

    cout << "------Security System------\n";
    cout << "_____________________________" << endl << endl;
    cout << "    1.     Register          " << endl;
    cout << "    2.      Login            " << endl;
    cout << "    3.  Change Password      " << endl;
    cout << "    4.    End Program        " << endl;
    cout << "_____________________________" << endl << endl;

    do {
        cout << "Enter your choice: ";
        cin >> a;

        switch (a) {
            case 1: {
                cout << "___________________________" << endl << endl;
                cout << "----------Register---------" << endl;
                cout << "___________________________" << endl << endl;
                cout << "Enter your Username: ";
                cin >> name;
                cout << "Enter your Password: ";
                cin >> password0;
                cout << "Enter your Age: ";
                cin >> age;

                ofstream file("file.txt", ios::app);
                if (file.is_open()) {
                    file << name << " " << password0 << " " << age << endl;
                    file.close();
                }
                break;
            }

            case 2: {
                cout << "___________________________" << endl << endl;
                cout << "----------Login-----------" << endl;
                cout << "___________________________" << endl << endl;

                ifstream file("file.txt");
                cout << "Enter your Username: ";
                cin >> user;
                cout << "Enter your Password: ";
                cin >> pass;

                bool loginSuccess = false;
                if (file.is_open()) {
                    while (getline(file, text)) {
                        istringstream iss(text);
                        iss >> creds[0] >> creds[1] >> creds[2];
                        if (user == creds[0] && pass == creds[1]) {
                            loginSuccess = true;
                            break;
                        }
                    }
                    file.close();
                }

                if (loginSuccess) {
                    cout << "Login Successful" << endl;
                    cout << "Username: " << creds[0] << endl;
                    cout << "Age: " << creds[2] << endl;
                } else {
                    cout << "Login Failed" << endl;
                }
                break;
            }

            case 3: {
                cout << "----------Change Password---------" << endl;
                ifstream file("file.txt");
                ofstream tempFile("temp.txt");
                cout << "Enter your Username: ";
                cin >> user;
                cout << "Enter your Old Password: ";
                cin >> oldPassword;

                bool passwordChanged = false;
                if (file.is_open() && tempFile.is_open()) {
                    while (getline(file, text)) {
                        istringstream iss(text);
                        iss >> cp[0] >> cp[1] >> cp[2];
                        if (user == cp[0] && oldPassword == cp[1]) {
                            cout << "Enter your New Password: ";
                            cin >> password1;
                            cout << "Enter your password again to confirm: ";
                            cin >> password2;

                            if (password1 == password2) {
                                tempFile << cp[0] << " " << password1 << " " << cp[2] << endl;
                                cout << "Password Changed Successfully" << endl;
                                passwordChanged = true;
                            } else {
                                tempFile << cp[0] << " " << cp[1] << " " << cp[2] << endl;
                                cout << "Passwords did not match" << endl;
                            }
                        } else {
                            tempFile << text << endl;
                        }
                    }
                    file.close();
                    tempFile.close();
                    remove("file.txt");
                    rename("temp.txt", "file.txt");
                }

                if (!passwordChanged) {
                    cout << "Please enter a valid username and password" << endl;
                }
                break;
            }

            case 4:
                cout << "________Thank You________" << endl;
                break;

            default:
                cout << "Enter a valid Choice" << endl;
                break;
        }
    } while (a != 4);

    return 0;
}
