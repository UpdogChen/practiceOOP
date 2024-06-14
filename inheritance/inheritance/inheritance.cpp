#include <iostream>
#include <string>
using namespace std;

class pet {
public:
	pet(string Name, int Age);
	pet();
	void setName(string Name);
	string getName() const;
	void setAge(int Age);
	int getAge() const;
	virtual void print() const;
private:
	string name;
	int age;
};

class cat : public pet {
public:
	cat(string Name, int Age, string Breed);
	cat();
	void setBreed(string Breed);
	string getBreed() const;
	virtual void print() const;
private:
	string breed;
};

int main() {
	cat mimi("mimimoumou", 5, "mixed");
	mimi.print();
	mimi.setName("mimi Chen");
	mimi.print();
}

pet::pet(string Name, int Age) :name(Name), age(Age) {};
pet::pet() :name("-"), age(0) {};

void pet::setName(string Name) {
	name = Name;
}

string pet::getName() const {
	return name;
}

void pet::setAge(int Age) {
	age = Age;
}

int pet::getAge() const {
	return age;
}

void pet::print() const {
	cout << "This function should not be called.";
	exit(1);
}

cat::cat(string Name, int Age, string Breed) :pet(Name, Age), breed(Breed) {};
cat::cat() :pet(), breed("-") {};

void cat::setBreed(string Breed) {
	breed = Breed;
}

string cat::getBreed() const {
	return breed;
}

void cat::print() const {
	cout << "Name: " << getName() << endl;
	cout << "Age: " << getAge() << endl;
	cout << "Breed: " << breed << endl;
}