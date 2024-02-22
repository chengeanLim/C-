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
	return outs << "\a"; //시스템 beep(삑 소리) 발생
}

istream& question(istream& ins)
{
	cout << "거울아 거울아 누가 제일 예쁘니";
	return ins;
}

int main()
{
	string answer;
	cin >> question >> answer;
	cout << answer << "입니다." << endl;
	cout << "별이 울립니다" << beep << endl;
	cout << "C" << rightarrow << "C++" << endl;
	cout << "Visual" << fivestar << "C++" << endl;
}