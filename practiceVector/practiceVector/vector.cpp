#include<iostream>
#include<vector>
using namespace std;

int main() {
	
	cout << "Program1: use push_back to get the value of items\n";
	vector<int> v1;
	cout << "Enter numbers. If you want to stop, please enter 0.\n";
	int next;
	cin >> next;
	while (next > 0) {
		v1.push_back(next);
		cout << next << " added. ";
		cout << "v's size: " << v1.size() << endl;
		cin >> next;
	}

	cout << "You entered: ";
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";
	
	
	cout << "\n\nProgram2: set value after declaration\n";
	vector<int> v2(5);
	for (int i = 0; i < 5; i++)
		v2[i] = 2 * i;
	for (int i = 0; i < 5; i++)
		cout << v2[i] << " ";
	
	return 0;
}