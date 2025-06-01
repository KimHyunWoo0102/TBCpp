#include<iostream>

using namespace std;

int getInt() {
	while (true) {
		cout << "Enter a integer number : ";
		int x;
		cin >> x;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Invalid numberm please try again" << endl;
		}
		else {
			cin.ignore(32767, '\n');
			return x;
		}
	}
}

char getOperator() {
	while (true) {
		cout << "Enter an operator (+,-,*,/) : ";
		char op;
		cin >> op;
		cin.ignore(32767, '\n');

		if (op == '+' || op == '-' || op == '*' || op == '/')
			return op;
		else
			cout << "Invalud operator, please try again." << endl;
	}
}

void printResult(int x, char op, int y) {
	switch (op) {
	case '+':
		cout << x + y << endl;
		break;
	case '-':
		cout << x - y << endl;
		break;
	case '*':
		cout << x * y << endl;
		break;
	case '/':
		cout << x / y << endl;
		break;
	default:
		cout << "Invalid operator" << endl;
	}
}
int main() {
	int x, y;
	char op;

	x = getInt();
	y = getInt();
	op = getOperator();

	printResult(x, op, y);
	return 0;
}