#include"overloadingOperators.h"
#include<iostream>
using namespace std;

int main() {
	complex com1(-10, 5), com2(7,6), com3(4), com4, com5, com6, com7;
	cout << "com1: ";
	com1.showResult();
	cout << "com2: ";
	com2.showResult();
	cout << "com3: ";
	com3.showResult();

	cout << "com4 = com1 + com2, com4: ";
	com4 = com1 + com2;
	com4.showResult();
	cout << "com5 = com1 - 5, com5: ";
	com5 = com1 - 5;
	com5.showResult();
	cout << "com6 = com1 * com2, com6: ";
	com6 = com1 * com2;
	com6.showResult();
	cout << "com7 = -com1, com7: ";
	com7 = -com1;
	com7.showResult();

}