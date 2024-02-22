#include <iostream>
using namespace std;

int main()
{
	cout << "학교 주소를 입력하세요: ";

	char addr[100];
	cin.getline(addr, 100, '\n');

	cout << "학교 주소는 " << addr << "입니다.\n";
}