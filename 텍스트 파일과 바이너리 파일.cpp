/*
텍스트 파일과 바이너리 파일

-텍스트파일
  - 사람이 사용하는 글자로 구성
    -알파벳, 한글, 숫자, 기호 등
    - ASCUII 코드, 유니코드 등으로 변환가능

- 바이너리 파일
  - 문자로 표현되지 않는 바이너리 데이타
    - 오디오, 이미지, 동영상, 실행 파일 등

- 파일을 IO하기 위한 모듈
  - ifsream
    -파일 읽기

  - ofstream
    - 파일 쓰기

  - fstream
    - 파일 읽기와 쓰기

파일 입출력 스트림

- >> 연산자와 istream 의 get.read() 함수
 - 연결된 장치로부터 읽는 함수
 - 키보드에 연결되면 키 입력을 파일에 연결되면 파일에서 입력

- << 연산자와 ostream의 put(), write() 함수
 -연결된 장치에 쓰는 함수
 -스크린에 연골되면 화면에 파일에 얀결되면 파일에 출력

- 파일 입출력 라이브러리
  - <fstream> 해더 파일과 std 네임스페이스 선언 필요

파일 입출력 모드

-파일 입출력 방식
  - 텍스트 I/O와 바이너리 I/O의 두 방식
    -C++ 파일 입출력 클래스 는 두 방식 지원

 - 텍스트 I/O
   - 문자 단위로 파일에 쓰기 파일에서 읽기
     - 문자를 기록하고, 읽은 바이트를 문자로 해석
   -텍스트 파일에만 적용

-바이너리 I/O
  -바이트 단위로 파일에 쓰기, 파일에서 읽기
    - 테이터를 문자로 해석하지 않고 있는 그대로 기록하거나 읽음

  -텍스트 ㅏ일과 바이너리 파일 모두 입출력 가능
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char name[10], dept[20];
    int sid;
    //키보드로부터 읽기
    cout << "이름 >> ";
    cin >> name; //키보드에서 이름 입력 받음
    cout << "학번 >> ";
    cin >> sid; //키보드에서 학번 입력 받음
    cout << "학과 >> "; 
    cin >> dept; //키보드에서 학과 입력 받음

    //파일열기. student.txt 파일을 열고, 풀력 스트림 생성

    ofstream fd("C:\\Users\\cksrm\\OneDrive\\바탕화면\\대학수업\\c++\\예제\\student.txt");
    if (!fd)
    {
        cout << "C:\\Users\\cksrm\\OneDrive\\바탕 화면\\대학 수업\\c++\\예제\\student.txt 파일을 열 수 없다.";
        return 0;
    }

    //파일 쓰기
    fd << name << endl; //name 쓰기
    fd << sid << endl; //sid 쓰기
    fd << dept << endl; //dept 쓰가

    fd.close(); //파일 닫기
}