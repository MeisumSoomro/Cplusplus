#include <iostream>
#include <std.ioh>
using namespace std;

// function add2 is defined. is called and evaluated
int add2(int i) {
	int j = i + 2;
	return j;
}

// add2 is called with two parameters
// which overrules the initital declaration
int add2(int i, int j) {
	int k= i + j +2;
	return k;
}
