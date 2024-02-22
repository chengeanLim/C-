#include <iostream>
#include <string>
using namespace std;

int main()
{
	string universtiy("백석대학교");
	string department("컴퓨터 공학과");
	string subject("C++");
	string mySubject;

	cout <<"사랑합니다" + universtiy+ "입니다." << endl;
	cout <<"수강하는 수업은";

	getline(cin, mySubject);
	
	if(subject == mySubject)
	{
		cout << subject + "이 맞습니다." << endl;
	}
	
	else
	{
		cout << subject + "수업이 아닙니다." << endl;
	}
}