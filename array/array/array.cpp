#include<iostream>
using namespace std;

int* doubler(int a[], int size);


int main() {

	//a function that return an array
	int* p;
	int a[] = { 1,2,3,4,5 };
	p =doubler(a, 5);

	cout << "Initial: ";
	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}

	cout << "\nAfter Double: ";
	for (int i = 0; i < 5; i++) {
		cout << p[i] << " ";  //the same with *(p+i)
	}

	delete[] p;


	//2-dimensional dynamic array
	//3*4 array
	int** p1 = new int* [3];
	for (int i = 0; i < 3; i++)
		p1[i] = new int[4];
	delete [] p1;

	//3*4 array use typedef
	typedef int* intptr;
	intptr* p2 = new intptr[3];
	for (int i = 0; i < 3; i++)
		p2[i] = new int[4];
	delete[] p2;
}

int* doubler(int a[], int size) {
	int* temp = new int[size];
	for (int i = 0; i < size; i++) {
		temp[i] = 2 * a[i];
	}
	return temp;
}