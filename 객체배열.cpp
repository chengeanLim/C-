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
		cout << "도넛" << i << "의 면적은" << donutArray[i].getArea() << endl;

	/*
	Circle donutArray[3];

	//배열을 이용한 객체 접근
	donutArray[0].setRadius(10);
	donutArray[1].setRadius(20);
	donutArray[2].setRadius(30);

	for (int i = 0; i < 3; i++)
		cout << "도넛" << i << "의 면적은" << donutArray[i].getArea() << endl;

	Circle *p;
	p = donutArray;
	for (int i = 0; 0 < 3; i++)
	{
		//객체 포인터로 배열 접근
		cout << "도넛" << i << "의 면적은" << p->getArea() << endl;
		p++;
	}
	*/
}