#include <iostream>
#include <string>
using namespace std;

int main()
{
	string universtiy("�鼮���б�");
	string department("��ǻ�� ���а�");
	string subject("C++");
	string mySubject;

	cout <<"����մϴ�" + universtiy+ "�Դϴ�." << endl;
	cout <<"�����ϴ� ������";

	getline(cin, mySubject);
	
	if(subject == mySubject)
	{
		cout << subject + "�� �½��ϴ�." << endl;
	}
	
	else
	{
		cout << subject + "������ �ƴմϴ�." << endl;
	}
}