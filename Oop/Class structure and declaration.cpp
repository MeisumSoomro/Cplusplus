// structure for class declaration

#include <iostream>

class person {
	char name [30];
	int age;
	
		public:
			void getdata(void);
			void display(void);
};

void person :: getdata (void) {
	cout << "Enter name";
	cin >> name;
	
	cout << "Enter age";
	cin >> age;
}

void display() {
	cout << "\n name:" <<name;
	cout << "\n age:" << age;
}


int main() {
	poerson p;
	p.getdata;
	p.display();
	return 0;
}
