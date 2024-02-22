#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char code[11];
	int lock = 1;
	cout << "방 비밀번호를 입력하세요." << endl;

	while(lock)
	{
		cout << "비밀번호:";
		cin >> code;
		if (strcmp(code, "2222") == 0)
		{
			cout << "문이 열렸습니다." << endl;
			lock = 0;
		}

		else
		{
			cout << "잘못 입력하였습니다." << endl;
 		}
	}
}