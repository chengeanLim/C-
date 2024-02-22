#include <iostream>
using namespace std;

#include "파일의 분리(circle).h"

int main()
{
	Circle donut;
	double area = donut.getArea();
	cout << "도넛 면적은";
	cout << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "피자 면적은";
	cout << area << endl;
}