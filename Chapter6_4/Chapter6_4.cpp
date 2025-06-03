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

	//printArr(arr, length);
	//
	//for (int i = 0; i < length-1; i++) {
	//	int min_idx = i;
	//	for (int idx = i + 1; idx < length; idx++) {
	//		if (arr[min_idx] > arr[idx])
	//			min_idx = idx;
	//	}
	//	
	//	//swap two values in the array
	//	{
	//		int tmp = arr[min_idx];
	//		arr[min_idx] = arr[i];
	//		arr[i] = tmp;
	//	}
	//	printArr(arr, length);
	//}

	//bubble sort
	printArr(arr, length);
	for (int i = length - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		printArr(arr, length);
	}
	cout << endl;
	return 0;
}