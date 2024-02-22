#include <iostream>
using namespace std;

class Circle
{
	int radius;

public:
	Circle();
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle()
{
	radius = 1;
}

int main()
{
	cout << "생성하는 원의 개수?";
	int n, radius;
	cin >> n; //원의 개수 압력
	Circle *pArray = new Circle[n];

	for (int i = 0; i < n; i++)
	{
		cout << "원" << i + 1 << ":";
		cin >> radius; //반지름입력
		pArray[i].setRadius(radius);
	}

	int count = 0; //카운트 변수
	Circle *p = pArray;

	for (int i = 0; i < n; i++)
	{
		cout << p->getArea() << "";
		
		if (p->getArea() >= 100 && p->getArea() <= 300)
			count++;

		p++;
	}

	cout << endl << "면적이 100에서 300 사이인 원의 개수는 " << count << endl;

	delete[] pArray; //객체 배열 소멸
}