#include <iostream>
using namespace std;

class A {
	private:
		int a;
		
		public:
			A (): a(5){
			}
			
			friend class B;
};

class B {
	private:
		int b;
		
		public:
			B (): b(15){
			}
			
			int func() {
				A obja;
				return obja.a + b;
			}
			
			friend class A;
};

int main () {
	B.objb;
	cout << objb.func ();
	
	return 0;
}
