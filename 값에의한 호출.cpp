#include <iostream>
using namespace std;

/*
* ���� ���� ȣ��
void swap(int *a, int *b)
{
    int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}
*/

void swap(int a, int b)
{
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int m = 2, n = 9;
	/*
	* ���� ���� ȣ��
	swap(&m, &n)
	*/
	swap(m, n);
	cout << m << ' ' << n;
}