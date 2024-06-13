#include <iostream>
using namespace std;

typedef int* intptr;

class matrix{
public:
	matrix(int Row, int Column);
	matrix();
	void giveValue();
	void outputMatrix();
	matrix operator *(matrix& x);

private:
	int row;
	int column;
	intptr* m;
};


int main() {
	matrix m1(2, 3),m2(3,4),m3;
	m1.giveValue();
	m2.giveValue();
	m3 = m1 * m2;
	m3.outputMatrix();

}

matrix::matrix(int Row, int Column) :row(Row), column(Column) {};
matrix::matrix() :row(0), column(0) {};

void matrix::giveValue() {
	m = new intptr[row];
	for (int i = 0; i < row; i++)
		m[i] = new int[column];

	cout << "Enter " << row << "*" << column << "integers:\n";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++)
			cin >> m[i][j];
	}
	cout << "This matrix:\n";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++)
			cout << m[i][j] << " ";
		cout << endl;
	}
}
	

matrix matrix::operator *(matrix& x) {
	if (column != x.row) {
		cout << "Can't do this operation.";
		exit(1);
	}
	matrix m3(row, x.column);
	m3.m= new intptr[row];
	for (int i = 0; i < row; i++)
		m3.m[i] = new int[x.column];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < x.column; j++) {
			m3.m[i][j] = 0;
			for (int k = 0; k < column; k++)
				m3.m[i][j] = m3.m[i][j] + (m[i][k]) * (x.m[k][j]);
		}
	}
	return m3;
}

void matrix::outputMatrix() {
	cout << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++)
			cout << m[i][j] << " ";
		cout << endl;
	}
}
