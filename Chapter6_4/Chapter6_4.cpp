#include<iostream>

using namespace std;

void printArr(int arr[],int length) {
	for (int i = 0; i < length; i++)
		cout << arr[i] << " ";
	cout << endl;
}
int main() {
	const int length = 5;
	int arr[length] = { 3,5,2,1,4 };

	printArr(arr, length);
	
	int min_idx = 0;
	for (int i = 0; i < length-1; i++) {
		min_idx = i;
		for (int idx = i + 1; idx < length; idx++) {
			if (arr[min_idx] > arr[idx])
				min_idx = idx;
		}
		int tmp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = tmp;

		printArr(arr, length);
	}


	cout << endl;
	return 0;
}