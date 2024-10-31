#include <iostream>
#include <fstream> 	// ofstream writing, ifstream reading
using namespace std;

int main () {

char name[50];
int roll, mark;

ofstream outfile;		//outfile is stream and keyword

outfile.open ("student.txt");

cout << "Enter student name :";
// cin >> name;
cin.get(name,50);

cout << "Enter roll :";
cin >> roll;

outfile << name << endl;
outfile << roll << endl;
outfile.close ();

ifstream infile;
infile.open("student.txt");
infile >> name;
infile >> roll;
cout << "Name :" << name;
cout << "Roll no :" << roll;
infile.close();

return 0;

}
