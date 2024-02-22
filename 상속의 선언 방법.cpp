#include <iostream>
#include <string>
using namespace std;

class Shape
{
	int x, y;//�� �� (x, y) ��ǥ��
	int type;//0.������ 1. �� 2. �簢��

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
	showPoint();//Shape �� showPoint()ȣ��
}

int main()
{
	Shape p;//�⺻Ŭ������ ��ü ����
	Circle cp;//�Ļ� Ŭ������ ��ü ����
	cp.set(3, 4);//�⺻ Ŭ������ ���ȣ��
	cp.setColor("Red");//�Ļ� Ŭ������ ��� ȣ��
	cp.showCircle();//�Ļ� Ŭ������ ��� ȣ��
}