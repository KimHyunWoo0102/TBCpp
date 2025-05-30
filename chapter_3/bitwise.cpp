#include<iostream>
#include<bitset>

int main() {
	using namespace std;

	/*unsigned int a = 1024;
	cout << std::bitset<16>(a) << endl;
	cout << std::bitset<16>(~a) << endl;
	cout << std::bitset<16>(a>>1) << endl;
	cout << std::bitset<16>(a>>2) << endl;
	cout << std::bitset<16>(a>>3) << endl;
	cout << std::bitset<16>(a>>4) << endl;
	cout << std::bitset<16>(a>>5) << endl;
	cout << std::bitset<16>(a>>6) << endl;*/

	cout << std::bitset<4>(0b0110 >> 2) << endl;
	cout << std::bitset<4>(5 | 12) << endl;
	cout << std::bitset<4>(5 ^ 12) << endl;
	cout << std::bitset<4>(5 & 12) << endl;
}