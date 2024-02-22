#include <iostream>
using namespace std;

class Circle 
{
private:
	int radius;

public:
	Circle() :Circle(1) {}
	Circle(int r)
	{
		this->radius = radius;
		cout << "������ ���� radius = " << radius << endl;
	}

	~Circle() { cout << "�Ҹ��� ���� radius = " << radius << endl; }

	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};

void increaseCircle(Circle& c)
{
	int r = c.getRadius();
	c.setRadius(r + 1);
}

int main() 
{
	Circle ring(30);
	increaseCircle(ring);
	cout << ring.getRadius() << endl;
}