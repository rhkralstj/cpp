#include <iostream>

using namespace std;

int main() {
	
	//2
	int a;
	int b;
	int ope;

	cout << "Enter Two Variables : ";
	cin >> a >> b;

	cout << "1. Add\n" << "2. Substract\n" << "3. Multiply\n" << "4.Divide\n" << "5. Exit\n";
	cout << "Selcect Operation : " << endl;

	cin >> ope;

	switch (ope)
	{
	case 1:
		cout << "Result : " << a + b << endl;
		break;
	case 2:
		cout << "Result : " << a - b << endl;
		break;
	case 3:
		cout << "Result : " << a * b << endl;
		break;
	case 4:
		cout << "Result : " << a / b << endl;
		break;
	case 5:
		cout << "End the Program " << endl;
		break;
	default:
		cout << "Wrong Input" << endl;
		break;
	}
	
	
	//3
	int dan;
	cout << "�� �� �Է�: ";
	cin >> dan;

	if (dan >= 1 && dan <= 9) {
		for (int i = 1; i < 10; i++) {
			cout << dan << " * " << i << " = " << dan * i << endl;
		}
	}
	else if (dan == 0) {
		cout << "���α׷� ����" << endl;
	}
	else {
		cout << "�ٽ� �Է����ּ���" << endl;
	}

	//4
	int num;
	cout << "1���� ũ�� 100���� ���� �� : ";
	cin >> num;

	int count_num = 0;
	int g_num = num;
	do
	{
		g_num = (g_num % 10) * 10 + (g_num % 10 + g_num / 10) % 10;
		count_num++;
	} while (g_num != num);
	cout << count_num << endl;

	//5

	int n;
	cout << "�Ǻ���ġ Ƚ�� : ";
	cin >> n;
	int p;
	int q;
	int r;

	for (int i = 0; i < n; i++) {
		
		p = 0;
		q = 1;

		for (int j = 0; j < i; j++) {
			r = q;
			q = q + p;
			p = r;
		}
		cout << q << endl;
	}
	
	return 0;
}