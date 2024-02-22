/*
-삽입 연산자(<<)
  - insertion operator, 삽입자라고도 부름
    - << 연산자는 C++의 기본 연산자 : 정수 시프트 연산자
    -ostream 클래스에 중복 작성되어 있음

-추출 연산자(>>)
 - extraction operator
  - >> 연산자는 C++의 기본 연산자 : 정수 시프트 연산자
  -ostream 클래스에 중복 작성되어 있음
*/

#include <iostream>
using namespace std;

class Point //한 점을 표현하는 클래스
{
    int x, y; // private 멤버

public:
    Point(int x = 0, int = y 0)
    {
        this->x = x;
        this->y = y;
    }

    friend ostream& operator << (ostream& stream, Point a);
};

// <<연산자 함수
ostream& operator << (ostream& stream, Point a)
{
    stream << "(" << a.x << "," << a.y << ")";
    return stream;
}

int main()
{
    Point p(3.4); //Point 객체 생성
    cout << p << endl; //Point 객체화면 출력

    Point q(1, 100), r(2, 200); //Point 객체 생성
    cout << q << r << endl; //Point 객체들 연속하여 화면 출력
}