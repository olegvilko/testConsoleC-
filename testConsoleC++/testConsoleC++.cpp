#include "pch.h"
#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float x1, y1, x2, y2, x3, y3;

	cout << "Введите x1: ";
	cin >> x1;
	cout << "Введите y1: ";
	cin >> y1;
	cout << "Введите x2: ";
	cin >> x2;
	cout << "Введите y2: ";
	cin >> y2;
	cout << "Введите x3: ";
	cin >> x3;
	cout << "Введите y3: ";
	cin >> y3;

	float checkLine = (x1 - x3)*(y2 - y3) - (x2 - x3)*(y1 - y3);

	if (checkLine == 0) {
		cout << "Точки принадлежат одной прямой\n";
	}
	else
	{
		cout << "Точки не принадлежат одной прямой\n";
	}
	system("pause");
}