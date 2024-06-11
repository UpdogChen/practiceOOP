#include "overloadingOperators.h"
#include <iostream>
using namespace std;

complex::complex(int Real, int Imag) :real(Real), imag(Imag) {};
complex::complex(int Real) :real(Real), imag(0) {};
complex::complex() :real(0), imag(0) {};

complex complex::operator +(complex& x) {
	complex c;
	c.real = real + x.real;
	c.imag = imag + x.imag;
	return c;
}

complex complex::operator +(int Real) {
	complex c;
	c.real = real + Real;
	c.imag = imag;
	return c;
}

complex operator +(int Real, complex& x) {
	complex c;
	c.real = Real + x.real;
	c.imag = x.imag;
	return c;
}

complex complex::operator -(complex& x) {
	complex c;
	c.real = real - x.real;
	c.imag = imag - x.imag;
	return c;
}

complex complex::operator -(int Real) {
	complex c;
	c.real = real - Real;
	c.imag = imag;
	return c;
}

complex operator -(int Real, complex& x) {
	complex c;
	c.real = Real - x.real;
	c.imag = - x.imag;
	return c;
}

complex complex::operator-() {
	complex c;
	c.real = -real;
	c.imag = -imag;
	return c;
}

complex complex::operator *(complex& x) {
	complex c;
	c.real = real * x.real - imag * x.imag;
	c.imag = imag * x.real + real * x.imag;
	return c;
}

complex complex::operator *(int Real) {
	complex c;
	c.real = real * Real;
	c.imag = imag * Real;
	return c;
}

complex operator *(int Real, complex& x) {
	complex c;
	c.real = Real * x.real;
	c.imag = Real * x.imag;
	return c;
}

void complex::showResult() {
	cout << real << "," << imag << "i\n";
}