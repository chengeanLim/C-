#include <iostream>
using namespace std;

int main()
{
	cout << "�Է� ������?";
	int n;
	cin >> n;
	if(n <= 0) return 0;

	int *p = new unt[n];
	if(!p)
	{
		cout << "�޸𸮸� �Ҵ�� �� �����ϴ�.";
		return 0;
	}

	for (int i = 0;i < n, i++)
	{
		cout << i + 1 << "��° �Է� :";
		cin >> p[i]; //���� �Է�
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += p[i];

	cout << "���� = " << sum << endl;
	delete[] p; //�迭 �޸� ��ȯ
}