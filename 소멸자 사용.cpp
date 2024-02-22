#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;

	Circle();
	Circle(int r);
	~Circle(); //소멸자
	double getArea();
};

Circle::Circle()
{
	radius = 5;
	cout << "지름이" << radius * 2 << "인 원 생성" << endl;
}

Circle::Circle(int r)
{
	radius = r;
	cout << "지름이" << radius * 2 << "인 원 생성" << endl;
}

Circle::~Circle()
{
	cout << "지름이" << radius * 2 << "인 원 소멸" << endl;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	Circle dounta;
	Circle pizza(10);
	return 0;
}