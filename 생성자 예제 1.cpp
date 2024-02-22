#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;
	Circle(); //매개 변수 없는 생성장
	Circle(int r); //매개 변수 있는 생성자
	double getArea();
};

Circle::Circle()
{
	radius = 10;
	cout << "반지름" << radius << "원 생성" << endl;
}

Circle::Circle(int r)
{
	radius = r;
	cout << "반지름" << radius << "원 생성" << endl;
}
/*
위에 13~23 코딩을 간략하게 밑에 처럼 줄일 수 있음.
Circle::Circle:Circle(1)
{
}

Circle::Circle(int r)
{
	radius = r;
	cout << "반지름" << radius << "원 생성" << endl;
}
*/
double Circle::getArea()
{
	return 3.14*radius*radius;
}

int main()
{
	Circle donut; //매개 변수 없는 생성자 호출
	double area = donut.getArea();
	cout << "도넛 면적은" << area << endl;

	Circle pizza(300); // 매개 변수 있는 생성자 호출
	area = pizza.getArea();
	cout << "피자 면적은" << area << endl;
}
