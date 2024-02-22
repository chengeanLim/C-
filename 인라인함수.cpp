#include <iostream>
using namespace std;

/*
int divide(int x)
{
	return (x / 2);
}
*/

/*
inline int divide(int x)
{
	return (x / 2);
}

int main()
{
	int sum = 0;

	for (int i = 1; i <= 10000; i++)
	{
		if (divide(i))
			sum += i;
	}

	cout << sum;
}
*/

int main()
{
	int sum = 0;

	for (int i = 1; i <= 10000; i++)
	{
		if (i/2)
			sum += i;
	}

	cout << sum;
}