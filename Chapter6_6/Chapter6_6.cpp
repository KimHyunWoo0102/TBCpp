#include<iostream>
#include<cstring>

using namespace std;

void my_strcpy(char* _Destination, int _SizeIntBytes, char* _Source); 
void my_strcat(char* _Destination, int _SizeIntBytes, char* _Source);
int strLen(char* _String);

int main() {
	char source[] = "Copy this!";
	char dest[50];

	my_strcpy(dest, sizeof(dest), source);
	cout << dest << endl;
	my_strcat(dest, sizeof(dest), source);
	cout << dest << endl;
	return 0;
}

void my_strcpy(char *_Destination, int _SizeIntBytes, char *_Source)
{
	int len = strLen(_Source);
	if (len + 1 > _SizeIntBytes)
	{
		cout << "Error : _Destination size limits" << endl;
		exit(-1);
	}

	for (int i = 0; i<= len; i++)
		_Destination[i] = _Source[i];
}

void my_strcat(char* _Destination, int _SizeIntBytes, char* _Source)
{

	int destLen = strLen(_Destination);
	int sourceLen = strLen(_Source);
	if (destLen + sourceLen +1> _SizeIntBytes) {
		cout << "Error : not enough buffer";
		exit(-1);
	}

	for (int i = 0; i <= sourceLen; i++)
		_Destination[destLen + i] = _Source[i];
}

int strLen(char *_String)
{
	int cnt = 0;

	for (int i = 0; _String[i] != '\0'; i++)cnt++;
	return cnt;
}
