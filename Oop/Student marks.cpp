#include <iostream>
using namespace std;
struct student
{
  string name;
  int Subjects_Quantity;
  int marks[30];
};

void Show_StudentDetails(student students[], int Students_Quantity)
{

  for (int i = 0; i < Students_Quantity; i++)
  {
    cout << "Student name : " << students[i].name << endl;
    cout << "Marks :" << endl;
    for (int j = 0; j < students[i].Subjects_Quantity; j++)
    {
      cout << students[i].marks[j] << endl;
    }
  }
}
int main()
{

  int Students_Quantity;

  cout << "Please Enter total number of students : ";

  cin >> Students_Quantity;

  if (Students_Quantity <= 0)
  {
    cout << "Please Please Enter a valid number" << endl;
    return -1;
  }

  student Array4students[Students_Quantity];

  for (int i = 0; i < Students_Quantity; i++)
  {

    cout << "Please Enter the name of student " << (i + 1) << " : " << endl;
    cin >> Array4students[i].name;

    cout << "Please Enter total number of subjects : ";
    cin >> Array4students[i].Subjects_Quantity;

    if (Array4students[i].Subjects_Quantity > 20 || Array4students[i].Subjects_Quantity <= 0)
    {
      cout << "Please Please Enter a valid number" << endl;
      return -1;
    }

    for (int j = 0; j < Array4students[i].Subjects_Quantity; j++)
    {
      cout << "Please Enter marks for subject " << (j + 1) << " : " << endl;
      cin >> Array4students[i].marks[j];
    }
  }

  Show_StudentDetails(Array4students, Students_Quantity);
}
