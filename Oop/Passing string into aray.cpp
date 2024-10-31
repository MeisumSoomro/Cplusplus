//passing an string into array
#include <iostream>
using namespace std;

class Student
{
    public:
        string studentName;
        string courseTaken[3];
        void setStudent(string n, string a[]); 
};

void setStudent(string n, string a[]); 

void Student::setStudent(string n, string a[])
{
   studentName = n;
   for(int i=0; i < sizeof(courseTaken)/sizeof(courseTaken[0]); i++)
    courseTaken[i] = a[i];
}

int main()
{
    Student student;

    string courses[3] = {"Cobol","C++","Fortran"};
    student.setStudent("Eva", courses);

    for (int i = 0; i < 3; i++){
        cout << student.courseTaken[i] << endl;
    }

    return 0;
    
}
