#include <iostream>
using namespace std;

#define Item_MAX 3 //판매음료수의 총 가지수

typedef struct
{
	char* Name;//음료수 이름
	int Price;//음료수 가격
} Item;

// 판매중인 음료수 의 이름과 가격
Item Menu[Item_MAX] = { "사이다", 400, "봉봉", 600, "냉커피", 700, "녹차", 800, "콜라", 350 };


/***
 * 자판기클래스 정의
 * 자판기 클래스인 VendMachine을 정의하고, 자판기에 필요한 변수와 함수를 정의한다.
 * 변수는 자판기 메뉴, 받은돈, 메뉴번호, 거스름돈을 나타내는 변수들
 * 함수에는 생성자함수, 소멸자 함수, 메뉴변경 함수, 출력함수, 받은돈을 처리하는 함수,
 * 메뉴를 선택하는 함수, 거스름돈을 처리하는 함수, 선택한 물건을 주는 함수가 사용
 ***/
class VendMachine
{
	Item* m_Menu; //판매중인 음료수 목록을 가리키는 구조체 포인터
	int InMoney; //자판기에 입력한 금액
	int ItemNum; //선택한 품목 번호
	int Change; //잔돈(거스름돈)
public:
	VendMachine(); //생성자 함수
	~VendMachine(); // 소멸자 함수

	void DisplayMenu(); //메뉴 설정함수
	void GetMoney(); //메뉴 출력함수
	void SelectItem(); //동전입력함
	void CalcChange();//음료수 품목 선택함수
	void GiveItem();//물건 전달하는 함수(그냥 모니터에 메시지만 출력하도록한다.)
};


//여기서부터 필요없음
// 생성자 함수에서 객체의 기본 메뉴값들을 구조체에 들어있는 값들로 초기화 시킨다. 
VendMachine::VendMachine()
{
	int i;
	m_Menu = new Item[sizeof(Menu) + 1];
	if (!m_Menu) exit(1);
	for (i = 0; i < Item_MAX; i++)
		m_Menu[i] = Menu[i];
	InMoney = 0;
	ItemNum = 0;
	Change = 0;
}

VendMachine::~VendMachine()
{
	delete m_Menu;
}

//혹시모르니 밑에 하나만 지워서 실험 해볼것
// 메뉴 변경함수에서 변경하고싶은 메뉴의 값들을 선택해 원하는 메뉴로 변경 가능하다.
void VendMachine::SetMenu(Item* Menu)
{
	int i, choice, sort, count = 0;

	cin >> choice;
	if (choice == 0) {
		while (count != Item_MAX) {
			cout << "변경을 끝내시려면 0, 변경 하고 싶은 항목의 번호를 입력하세요. >> ";
			cin >> sort;
			if (sort == 0)
				break;
			else if (sort > 0 && sort <= 6) {
				cout << "품목명 : ";
				Menu[sort - 1].Name = new char[50];
				fflush(stdin);
				cin >> Menu[sort - 1].Name;
				cout << "가격 : ";
				cin >> Menu[sort - 1].Price;
				count++;
			}
			else
				cout << "없는 메뉴입니다. 다시 입력하세요.\n";
		}
	}
	for (i = 0; i < Item_MAX; i++)
		m_Menu[i] = Menu[i];
}


//여기서부터는 고치고
//메뉴 보여주기
void VendMachine::DisplayMenu()
{
	int i;

	cout << "@__@ 메뉴판 @__@\n";

	for (i = 0; i < Item_MAX; i++)
		cout << i + 1 << " " << m_Menu[i].Name << " " << m_Menu[i].Price << endl;

	cout << "@______________@\n";
}

void VendMachine::GetMoney()
{
	cout << "금액을 입력하세요(1000원, 500원, 100원만) : ";

	while (1)
	{
		cin >> InMoney;

		if (InMoney % 100 == 0)
			break;

		else
			cout << "금액 단위가 잘못 되었습니다. 다시 입력하세요\n";
	}
}

void VendMachine::SelectItem()
{
	cout << "메뉴를 선택하세요(원하는 번호를 입력하세요)? ";

	while (1) {
		cin >> ItemNum;

		if (ItemNum > 0 && ItemNum <= 6)
			break;

		else
			cout << "없는 메뉴 입니다. 다시 입력하세요\n";
	}
}

void VendMachine::CalcChange()
{
	Change = InMoney - m_Menu[ItemNum - 1].Price;
}

void VendMachine::GiveItem()
{
	if (Change >= 0) {
		cout << m_Menu[ItemNum - 1].Name << "가(이) 출력되었습니다. 맛있게 드세요!\n";
		cout << Change << "원은 남았습니다. 감사합니다!\n";
	}
	else {
		cout << "금액이 부족합니다. ";
		cout << -Change << "원을 더 입력하세요.\n";
	}
	cout << "자동판매기 시뮬레이션이 종료되었습니다.\n";
}

/***
 * 메인함수에서는 우선 자판기 객체인 AA를 만들어준다.
 * 생성자 함수로 인해 자판기 메뉴가 구조체에 들어있는 값들로 초기화가 되어 출력된다.
 * AA.SetMenu(Menu) 함수에서 메뉴를 변경해서 다시 변경된 메뉴를 AA.DisplayMenu() 함수를 호출해서 출력한다.
 * AA.GetMoney(), AA.SelectItem(), AA.CalcChange(), AA.GiveItem() 함수를 호출해 자판기 프로그램을 실행되게 한다.
 ***/
int main()
{
	VendMachine AA; //자동 판매기 객체 한대를 생성
	AA.SetMenu(Item * Menu);
	AA.DisplayMenu();
	AA.GetMoney();
	AA.SelectItem();
	AA.CalcChange();
	AA.GiveItem();

	return 0;
}