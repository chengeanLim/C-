#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�." << endl;
	getline(cin, s, '&'); //���ڿ� �з�
	cin.ignore(); //& �ڿ� EnterŰ ����

	string f, r;
	cout << endl << "find : ";
	getline(cin, f, '\n'); //�˻��� ���ڿ� �Է�

	cout << "replace : ";
	getline(cin, r, '\n'); //��ü�� ���ڿ� �Է�

	int startindex = 0;
	while (true)
	{
		int findex = s.find(f, startindex); //startindex���� ���ڿ� f �˻�

		if (findex == -1)
			break; //���ڿ� s�� ������ �����Ͽ���

		s.replace(findex, f.length(), r); //findex���� ���ڿ� f�� ���̸�ŭ ���ڿ� r�� ����
		startindex = findex + r.length();
	}

	cout << s << endl;
}