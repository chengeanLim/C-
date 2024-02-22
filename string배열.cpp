/*
string str; //빈문자열을 가진 스트링 객체
string address("충남 천안시 백석대학교"); // 문자열 초기화
string copyaddress(address); //address를 복사한 copyAdress 생성

// C -스트링(char [] 배열)으로부터 스트링 객체 생성
char charArray[] ='H', 'e', 'l', 'l;, 'o', ' ', 'C', '+', '+', '\0'};
string tferStr(charArray); //"Hello C++" 문자열을 가진 string 객체 생성


*문자열 출력
string address("충남 천안시 백석대학교");
char charArray[] ='H', 'e', 'l', 'l;, 'o', ' ', 'C', '+', '+', '\0'};
string tferStr(charArray);
cout << address << endl;
cout << tferStr << endl;


*문자열 입력
string str;
cin >> str; //공백이 입력되면 하나의 문자열로 입력


*string을 이용한 숫자 변환
string s = "1234"
int n = stoi(s) //비주얼 C++ 2010 이상 버전 옛날에는 atoi를 사용


*string 객체의 동적 생성
string *p = new string("Hello"); //스트링 객체 동적 생성

cout << *p; //"Hello" 출력
p-> append("C++"); //p가 가리키는 스트링이 "C++ Great!!" 이 됨
cout << *p; //스트링 객체 변환

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string names[5]; //문자열 배열 선언

	for (int i = 0; i < 5; i++)
	{
		cout << "이름 >> ";
		getline(cin, names[i], '\n');
	}

	string latter = names[0];

	for (int i = 1; i < 5; i++)
	{
		if (latter < names[i]) //사전 순으로 정렬
		{
			latter = names[i];
		}
	}

	cout << "사전에서 가장 뒤에 나오는 문자열은" << latter << endl;
}