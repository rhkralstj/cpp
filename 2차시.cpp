#include <iostream>

using namespace std;

void swap(int* x, int* y) {
	int* a = x;
	int* b = y;
	x = b;
	y = a;
}

int main() {
	int A[10] = {1,2,3,4,5,6,7,8,9,10};
	cout << A[5] << endl;

	char str1[10] = { 'H', 'I', 'E', 'A', 'Z', 'L', 'T', 'L', 'U', 'O' };
	cout << str1[0] << str1[2] << str1[5] << str1[7] << str1[9] << endl;

	char str[6] = "Hello";
	char* num1;
	char* num2;
	char* num3;
	char* num4;
	char* num5;

	num1 = &str[0];
	num2 = num1 + 1;
	num3 = num1 + 2;
	num4 = num1 + 3;
	num5 = num1 + 4;
	cout << *num1 << *num2 << *num3 << *num4 << *num5 << endl;

	int a = 10;
	int b = 20;
	cout << a << ", " << b << endl;
	swap(a, b);
	cout << a << "," << b << endl;

	return 0;
}