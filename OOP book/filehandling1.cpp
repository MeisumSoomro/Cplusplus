#include<iostream>

#include<fstream> // ofstream writing // ifstream reading

using namespace std;

int main()
{
	char name[50];
	int roll,mark;

	
	ifstream infile;
	
	infile.open("Student.txt");
	infile>>name;
	infile>>roll;
	cout<<"Name : "<<name;
	cout<<"\n Roll no : "<<roll;
	infile.close();
	
	return 0;
	
	}
