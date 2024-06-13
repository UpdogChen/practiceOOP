#include<iostream>
#include<string>
using namespace std;


int main() {

	//c-string strcpy_s
	char aString[20] = "A dog and cats";
	cout << aString << endl;
	strcpy_s(aString, "Good morning!");
	cout << aString << endl;
	
	//c-string strcpy_s
	char anotherString[20] ="Hi!";
	cout << anotherString << endl;
	strcpy_s(anotherString, aString);
	cout << anotherString << endl;
	
	//c-string strcmp
	if (strcmp(anotherString, aString))
		cout << "Different.\n";
	else
		cout << "The same.\n";

	//c-string get/ getline
	char a, b[50];
	cout << "Enter some input:\n";
	cin.get(a);
	cout << a << endl;
	cin.getline(b, 50);
	cout << b << endl;

	//string concatenation
	string s1 = "Hello";
	string s2(" world.");
	string s3 = s1 + s2;
	cout << s3 << endl;

	//string getline
	string s4;
	cout << "Enter some input:\n";
	getline(cin, s4);
	cout << s4 << endl;

	//string cin & getline
	int n;
	string s5;
	cout << "Enter your age:\n";
	cin >> n;
	cout << "Your age is " << n << endl;
	cout << "Enter your name:\n";
	cin.ignore(100,'\n');
	getline(cin, s5);
	cout << "Your name is " << s5 << endl;
	cout << s5[2] << endl;
	cout << s5.length() << endl;
	
	//string ==
	string s6("Hello");
	string s7("world");
	s7 = s6;
	if (s6 == s7)
		cout << "The same.\n";
	else
		cout << "Different.\n";

}