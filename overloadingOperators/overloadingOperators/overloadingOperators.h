#ifndef overloadingOperators_h
#define overloadingOperators_h


class complex {

public:

	//constructor
	complex(int Real, int Imag);
	complex(int Real);
	complex();

	//operator+
	complex operator +(complex& x); //comp + comp
	complex operator +(int Real); //comp + real
	friend complex operator +(int Real, complex& x); //real + comp

	//operator-
	complex operator -(complex& x); //comp - comp
	complex operator -(int Real); //comp - real
	friend complex operator -(int Real, complex& x); // real - comp
	complex operator -(); // -comp

	//operator*
	complex operator *(complex& x); //comp * comp
	complex operator *(int Real); //comp * real
	friend complex operator *(int Real, complex& x); //real * comp

	void showResult();

private:
	int real, imag;
};

complex operator +(int Real, complex& x);
complex operator -(int Real, complex& x);
complex operator *(int Real, complex& x);

#endif
