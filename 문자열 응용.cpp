#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char code[11];
	int lock = 1;
	cout << "�� ��й�ȣ�� �Է��ϼ���." << endl;

	while(lock)
	{
		cout << "��й�ȣ:";
		cin >> code;
		if (strcmp(code, "2222") == 0)
		{
			cout << "���� ���Ƚ��ϴ�." << endl;
			lock = 0;
		}

		else
		{
			cout << "�߸� �Է��Ͽ����ϴ�." << endl;
 		}
	}
}