#include <iostream>
using namespace std;

#include "������ �и�(circle).h"

int main()
{
	Circle donut;
	double area = donut.getArea();
	cout << "���� ������";
	cout << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "���� ������";
	cout << area << endl;
}