#include <iostream>
using namespace std;

class Circle
{
	int radius;

public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }

	void setRadius(int r)
	{
		radius = r;
	}

	double getArea();
};

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	Circle donutArray[3] = { Circle(), Circle(10), Circle(20) };

	for (int i = 0; i < 3; I++)
		cout << "����" << i << "�� ������" << donutArray[i].getArea() << endl;

	/*
	Circle donutArray[3];

	//�迭�� �̿��� ��ü ����
	donutArray[0].setRadius(10);
	donutArray[1].setRadius(20);
	donutArray[2].setRadius(30);

	for (int i = 0; i < 3; i++)
		cout << "����" << i << "�� ������" << donutArray[i].getArea() << endl;

	Circle *p;
	p = donutArray;
	for (int i = 0; 0 < 3; i++)
	{
		//��ü �����ͷ� �迭 ����
		cout << "����" << i << "�� ������" << p->getArea() << endl;
		p++;
	}
	*/
}