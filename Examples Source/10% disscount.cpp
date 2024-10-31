#include <iostream>
using namespace std;
int main ( ) {
	int quantity,unitprice;
	float discountbill=0.1,totalbill;
	cout << "Enter your Quantity";
	cin >>quantity;
	unitprice=100;
	
	if(quantity*unitprice>1000) {
		discountbill=(quantity*unitprice)-(discountbill*quantity*unitprice);
		cout << "Bill with 10% discount=" <<discountbill;
		
	}
	
	else {
		totalbill=quantity*unitprice;
		cout <<"Yout Total bill="<<totalbill;
	}
}
