#include<iostream>
#include<cstdarg>
using namespace std;

double findAverage(int count, ...) {
	double sum = 0;

	va_list list;
	//����Ʈ�� ������ŭ �޾Ƽ� ����
	va_start(list, count);

	for (int arg = 0; arg < count; ++arg)
		sum += va_arg(list, int); //list�� ���� ���� int�� �ؼ��ϱ�
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
// c ��Ÿ�Ϸ� �޸� ���� �Ͽ� �����͸� �������� string �� ���Ұ���
int main() {
	cout << findAverage(1, 1, 2, 3, "Hello", 'c') << endl;
	cout << findAverage(3, 1, 2, 3) << endl;
	cout << findAverage(5, 1, 2, 3, 4, 5) << endl;
	cout << makeMsg(6, "kim", "hong", "sex", "c", 'c', "hi");
}