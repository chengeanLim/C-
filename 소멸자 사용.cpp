#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;

	Circle();
	Circle(int r);
	~Circle(); //�Ҹ���
	double getArea();
};

Circle::Circle()
{
	radius = 5;
	cout << "������" << radius * 2 << "�� �� ����" << endl;
}

Circle::Circle(int r)
{
	radius = r;
	cout << "������" << radius * 2 << "�� �� ����" << endl;
}

Circle::~Circle()
{
	cout << "������" << radius * 2 << "�� �� �Ҹ�" << endl;
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