/*
string str; //���ڿ��� ���� ��Ʈ�� ��ü
string address("�泲 õ�Ƚ� �鼮���б�"); // ���ڿ� �ʱ�ȭ
string copyaddress(address); //address�� ������ copyAdress ����

// C -��Ʈ��(char [] �迭)���κ��� ��Ʈ�� ��ü ����
char charArray[] ='H', 'e', 'l', 'l;, 'o', ' ', 'C', '+', '+', '\0'};
string tferStr(charArray); //"Hello C++" ���ڿ��� ���� string ��ü ����


*���ڿ� ���
string address("�泲 õ�Ƚ� �鼮���б�");
char charArray[] ='H', 'e', 'l', 'l;, 'o', ' ', 'C', '+', '+', '\0'};
string tferStr(charArray);
cout << address << endl;
cout << tferStr << endl;


*���ڿ� �Է�
string str;
cin >> str; //������ �ԷµǸ� �ϳ��� ���ڿ��� �Է�


*string�� �̿��� ���� ��ȯ
string s = "1234"
int n = stoi(s) //���־� C++ 2010 �̻� ���� �������� atoi�� ���


*string ��ü�� ���� ����
string *p = new string("Hello"); //��Ʈ�� ��ü ���� ����

cout << *p; //"Hello" ���
p-> append("C++"); //p�� ����Ű�� ��Ʈ���� "C++ Great!!" �� ��
cout << *p; //��Ʈ�� ��ü ��ȯ

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string names[5]; //���ڿ� �迭 ����

	for (int i = 0; i < 5; i++)
	{
		cout << "�̸� >> ";
		getline(cin, names[i], '\n');
	}

	string latter = names[0];

	for (int i = 1; i < 5; i++)
	{
		if (latter < names[i]) //���� ������ ����
		{
			latter = names[i];
		}
	}

	cout << "�������� ���� �ڿ� ������ ���ڿ���" << latter << endl;
}