#include <iostream>
using namespace std;

class box {
public:
	box(int Length, int Width, int High);
	box(int Length, int Width);
	box(int Length);
	box();
	
	int showVolumn();
private:
	int length;
	int width;
	int high;
	int volumn=0;
};

int main() {
	box box1(10, 5, 2),box2(10,5),box3(10),box4;
	box1.showVolumn();
	box2.showVolumn();
	box3.showVolumn();
	box4.showVolumn();
	return 0;
}

box::box(int Length, int Width, int High) :length(Length), width(Width), high(High) {};
box::box(int Length, int Width) :length(Length), width(Width), high(1) {};
box::box(int Length) :length(Length), width(1), high(1) {};
box::box():length(1), width(1), high(1) {};

int box::showVolumn() {
	volumn = length * width * high;
	cout << volumn <<endl;
	return 0;
}