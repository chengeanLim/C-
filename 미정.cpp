#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;
	Circle(); //위임 생성자
	Circle(int r); //타켓 생성자
	double getArea();
};

Circle::Circle() :Circle(1) {} //위임생성자

Circle::Circle(int r) // 타겟 생성자
{
	radius = r;
	cout << "반지름" << radius << "원 생성" << endl;
}

double Circle::getArea()
{
	return 3.15 * radius * radius;
}

int main()
{
	Circle donut; //매개 변수 없는 생성자 호출
	double area = donut.getArea();
	cout << "도넛 면적은" << area << endl;

	Circle pizza(30); //매개 변수 있는 생성자 호출
	area = pizza.getArea();
	cout << "피자 면적은" << area << endl;
}