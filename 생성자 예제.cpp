#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;
	Circle(); //�Ű� ���� ���� ������
	Circle(int r); //�Ű� ���� �ִ� ������
	double getArea();
};

Circle::Circle()
{
	radius = 10;
	cout << "��������" << radius << "�� �� ����" << endl;
}

Circle::Circle(int r)
{
	radius = r;
	cout << "������" << radius << "�� ����" << endl;
}

int main()
{
	Circle donut; //�Ű� ���� ���� ������ ȣ��
	double area = donut.getArea();
	cout << "donut ������" << area << endl;
	
	Circle pizza(300); //�Ű� ���� �ִ� ������ ȣ��
	area = pizza.getArea();
	cout << "pizza ������" << area << endl;
}
