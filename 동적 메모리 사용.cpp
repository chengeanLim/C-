#include <iostream>
using namespace std;

int main()
{
	cout << "입력 개수는?";
	int n;
	cin >> n;
	if(n <= 0) return 0;

	int *p = new unt[n];
	if(!p)
	{
		cout << "메모리를 할당랄 수 없습니다.";
		return 0;
	}

	for (int i = 0;i < n, i++)
	{
		cout << i + 1 << "번째 입력 :";
		cin >> p[i]; //정수 입력
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += p[i];

	cout << "총합 = " << sum << endl;
	delete[] p; //배열 메모리 변환
}