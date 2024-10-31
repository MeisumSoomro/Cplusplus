#include <iostream>
using namespace std;

//class beta;
class Alpha;		// forward declaration

class Alpha {
	private:
		int a;
	public:
		Alpha():a(5){
		}
		friend int_func (Alpha, Beta);
};

class Beta {
	private:
		int b;
	public:
		Beta():b(10){
		}
		friend int_func (Alpha, Beta);
		//void get () {}
};

int func (Alpha aa, Beta bb) {
	//a+b;
	return(aa.a + bb.b);
}

int main () {
	Alpha obja;
	Beta objb;
	//objb.get ();
	
	int x;
	x = func (obja, objb);
	//cout << func(obja, objb);
	cout << x;
	return 0;
}
