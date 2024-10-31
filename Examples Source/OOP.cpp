#include <iostream>
using std::string;

class Employee {
	//Access modifier
	private:
		//encapsulation
		string Name;
		string Company;
		int Age;
		
		//below is details of class
		public:
			// setter
			void setName(string name) {
				Name = name;
			}
			//getter
		string getName() {
			return Name;
		}
		void setCompany(string company) {
			Company = company;
		}
		string getcompany() {
			return Company;
		}
		void setAge(int age) {
			Age = age;
		}
		int getAge() {
			return Age;
		}
		
		//function to call class
		void IntroduceYourself() {
			std::cout << "Name - " << Name << std::endl;
			std::cout << "Company - " << Company << std::endl;
			std::cout << "Age - " << Age << std::endl;

		}
		Employee(string name, string company, int age){
			Name = name;
			Company = company;
			Age = age;
		}
};
int main()//objects of class
{
	Employee employee1 = Employee("Meisum", "Freelancer",22);
	employee1.IntroduceYourself();
	
	Employee employee2 = Employee("John Wick-kid", "Private Contractor",39);
	employee2.IntroduceYourself();
	
	employee1.setAge(26);
	std::cout<<employee1.getName()<< " is "<< employee1.getAge() << " years old now " << std::end1;
}
