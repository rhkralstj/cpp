#include <iostream>

using namespace std;

int main() {

	cout << "My name is °û¹Î¼­" << endl;

	unsigned long a;
	a = 2147483648;
	cout << a << endl;

	const float PI = 3.14;
	char ch1 = 65;
	char ch2 = ch1 + 1;
	cout << PI << endl;
	cout << ch1 << endl;
	cout << ch2 << endl;

	char ch;
	int X;
	unsigned short siX;
	unsigned iX;
	long liX;
	long long lliX;
	cout << "sizeof(ch):" << sizeof ch << endl;
	cout << "sizeof(X):" << sizeof X << endl;
	cout << "sizeof(siX):" << sizeof siX << endl;
	cout << "sizeof(iX):" << sizeof iX << endl;
	cout << "sizeof(liX):" << sizeof liX << endl;
	cout << "sizeof(lliX):" << sizeof lliX << endl;

	float f;
	cout << "Please enter Fahrenheit Value : ";
	cin >> f;
	float c;
	c = (f - 32) * 5 / 9;
	cout << "Celsius value is " << c << endl;

	return 0;
}