#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	float number;
	cout << "������ �����:";
	cin >> number;

	if (number > 0) {
		cout << "����� ���������" << endl;
	}
	else if (number < 0) {
		cout << "����� ���������" << endl;
	}
	else {
		cout << "����� ������� ����" << endl;
	}
}