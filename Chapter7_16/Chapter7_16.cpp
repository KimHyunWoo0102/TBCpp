#include<iostream>
#include<cstdarg>
using namespace std;

double findAverage(int count, ...) {
	double sum = 0;

	va_list list;
	//리스트에 개수만큼 받아서 저장
	va_start(list, count);

	for (int arg = 0; arg < count; ++arg)
		sum += va_arg(list, int); //list에 적힌 값을 int로 해석하기
	va_end(list);
	return sum / count;
}

//string makeMsg(int count, ...) {
//	string msg = "";
//
//	va_list list;
//	va_start(list, count);
//
//	for (int arg = 0; arg < count; ++arg)
//		msg += va_arg(list, string) + " ";
//	va_end(list);
//	return msg;
//}
// c 스타일로 메모리 접근 하여 데이터를 꺼내오니 string 등 사용불가함
int main() {
	cout << findAverage(1, 1, 2, 3, "Hello", 'c') << endl;
	cout << findAverage(3, 1, 2, 3) << endl;
	cout << findAverage(5, 1, 2, 3, 4, 5) << endl;
	cout << makeMsg(6, "kim", "hong", "sex", "c", 'c', "hi");
}