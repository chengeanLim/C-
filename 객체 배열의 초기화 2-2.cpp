#include <iostream>
using namespace std;
class  Circle
{
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = 1; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	Circle donutArea[3] = { Circle(), Circle(10), Circle(20) }
	for (int i = 0;i < 3;i++)
		cout << "Donut" << i << "의 면적은" << donutArray[i]getArea() << endl;
}

