#include<iostream>

int main() {
	using namespace std;

	string hello = "Hello, my name is Jack jack";

	cout << "Input from 0 to " << hello.size() - 1 << endl;

	while (true) {
		int ix;
		cin >> ix;

		if (ix >= 0 && ix <= hello.size() - 1) {
			cout << hello[ix] << endl;
			break;
		}
		else {
			cout << "please try again" << endl;
		}
	}
	return 0;
}