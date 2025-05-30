#include<iostream>
#include<bitset>

int main() {
	using namespace std;

	int a = 1024;
	cout << bitset<16>(a) << endl;
	cout << bitset<16>(a >> 1) << endl;
	cout << bitset<16>(a >> 2) << endl;
	cout << bitset<16>(a >> 3) << endl;
	cout << bitset<16>(a >> 4) << endl;

	cout << bitset<4>(0b0110 >> 2) << endl; //0001
	cout << bitset<4>(5 | 12) << endl; //1101
	cout << bitset<4>(5 ^ 12) << endl; //1001
	cout << bitset<4>(5 & 12) << endl; //0100
	return 0;
}