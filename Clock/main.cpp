#include <iostream>
#include <unistd.h> // For usleep  

using namespace std;

int main() {
    int h, m, s, a, err;
    err = a = 0;
    while(err == 0) {
        cout << "Enter hours: ";
        cin >> h;
        cout << "Enter minutes: ";
        cin >> m;
        cout << "Enter seconds: ";
        cin >> s;
        if (h < 24 && m < 60 && s < 60) {
            err++;
        } else {
            system("clear");
        }
        while(a == 0) {
            system("clear");
            cout << h << ":" << m << ":" << s << endl;
            usleep(1000000); // Sleep for 1 second
            s++;
            if (s > 59) {
                s = 0;
                m++;
            }
            if (m > 59) {
                m = 0;
                h++;
            }
            if (h > 24) {
                h = 0;
            }
        }
    }
    return 0;
}
