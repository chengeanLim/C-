#include <iostream>
using namespace std;

class Rectangle
{
public:
	int width, height;
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int length);
	bool isSquare();
};

Rectangle::Rectangle()
{
	// call by rect1
	width = height = 1;
}

Rectangle::Rectangle(int w, int h)
{
	// callde by rect2
	width = w; height = h;
}

Rectangle::Rectangle(int length)
{
	// called by rect3
	width = height = length;
}

//���簢���̸� ture�� �����ϴ� ��� �Լ�
bool Rectangle::isSquare()
{
	if (width == height) return true;
	else return false;
}

int main()
{
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1�� ���簢���Դϴ�." << endl;
	if (rect2.isSquare()) cout << "rect2�� ���簢���Դϴ�." << endl;
	if (rect3.isSquare()) cout << "rect3�� ���簢���Դϴ�." << endl;
}