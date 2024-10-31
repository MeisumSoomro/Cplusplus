#include <iostream>
using namespace std;
class beta;
class alpha{
	private:
		int a;
		public:
			alpha():a(5){}
			friend int fun();
};

class beta{
	private:
		int b;
		public:
			beta():b(10){}
			friend int fun();
};

int fun(alpha aa,beta bb)
{
	return (aa.a+bb.b);
		
}




int main()
{
	alpha obja;
	beta objb;
	cout<<fun(obja,objb);

}
