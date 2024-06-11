#include <iostream>
using namespace std;

class number {

public:
	number(int i);
	number();

	int getNum();

	//prefix operator++ with member function
	//number& operator ++();
	
	//prefix operator++ with non-friend function
	friend number& operator ++(number& x);
	
	//postfix operator++ with member function
	//number operator ++(int);
	
	//postfix operator++ with non-friend function
	friend number operator++(number& x, int);

private:
	int num;

};

int main() {
	number n1(5),n2(5);
	cout << "n1 init: " << n1.getNum() << ",n2 init: " << n2.getNum() << endl;
	number n3 = ++n1;
	cout << "n3 = ++n1, value returned: " << n3.getNum() << ", changed object: " << n1.getNum() << endl;
	number n4 = n2++;
	cout << "n4 = n2++, value returned: " << n4.getNum() << ", changed object: " << n2.getNum() <<endl;
}

number::number(int i) :num(i) {};
number::number() :num(0) {};

int number::getNum() {
	return num;
}

/*number& number::operator++() {
	num++;
	return *this;
}*/

number& operator ++(number& x) {
	x.num++;
	return x;
}

/*number number::operator++(int) {
	int tmp = num;
	num++;
	return number(tmp);
}*/

number operator++(number& x, int) {
	number tmp = x;
	x.num++;
	return tmp;
}