#include <iostream>
using namespace std;

/*
* 값에 의한 호출
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
	* 값에 의한 호출
	swap(&m, &n)
	*/
	swap(m, n);
	cout << m << ' ' << n;
}