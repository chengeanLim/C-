#include <iostream>
#include <string>
using namespace std;

class Shape
{
	int x, y;//한 점 (x, y) 좌표값
	int type;//0.미지정 1. 원 2. 사각형

public:
	Shape() { type = 0; }
	void set(int x, int y)
	{
		this->x = x; this->y = y;
	}

	void showPoint()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class Circle : public Shape
{
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showPoint();
};

void Circle::showCircle()
{
	cout << color << ":";
	showPoint();//Shape 의 showPoint()호출
}

int main()
{
	Shape p;//기본클래스의 객체 생성
	Circle cp;//파생 클래스의 객체 생성
	cp.set(3, 4);//기본 클래스의 멤버호출
	cp.setColor("Red");//파생 클래스의 멤버 호출
	cp.showCircle();//파생 클래스의 멤버 호출
}