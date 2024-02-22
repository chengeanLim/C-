#include <iostream>
using namespace std;

int main()
{
	int x;
	int y;
	int area;
	
	cout << "가로 길이를 입력하세요 >>";
	cin >> x;
	
	cout << "세로 길이를 입력하세요 >>";
	cin >>y;
	
	area = x*y;
	
	cout << "사각형의 면적은" << area << endl; 
}
