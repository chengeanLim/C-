#include <iostream>
#include <string>
using namespace std;

ostream& fivestar(ostream& outs)
{
	return outs << "******";
}

ostream& rightarrow(ostream& outs)
{
	return outs << "----->";
}

ostream& beep(ostream& outs)
{
	return outs << "\a"; //�ý��� beep(�� �Ҹ�) �߻�
}

istream& question(istream& ins)
{
	cout << "�ſ�� �ſ�� ���� ���� ���ڴ�";
	return ins;
}

int main()
{
	string answer;
	cin >> question >> answer;
	cout << answer << "�Դϴ�." << endl;
	cout << "���� �︳�ϴ�" << beep << endl;
	cout << "C" << rightarrow << "C++" << endl;
	cout << "Visual" << fivestar << "C++" << endl;
}