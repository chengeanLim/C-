#include <iostream>
using namespace std;

#define Item_MAX 3 //�Ǹ�������� �� ������

typedef struct
{
	char* Name;//����� �̸�
	int Price;//����� ����
} Item;

// �Ǹ����� ����� �� �̸��� ����
Item Menu[Item_MAX] = { "���̴�", 400, "����", 600, "��Ŀ��", 700, "����", 800, "�ݶ�", 350 };


/***
 * ���Ǳ�Ŭ���� ����
 * ���Ǳ� Ŭ������ VendMachine�� �����ϰ�, ���Ǳ⿡ �ʿ��� ������ �Լ��� �����Ѵ�.
 * ������ ���Ǳ� �޴�, ������, �޴���ȣ, �Ž������� ��Ÿ���� ������
 * �Լ����� �������Լ�, �Ҹ��� �Լ�, �޴����� �Լ�, ����Լ�, �������� ó���ϴ� �Լ�,
 * �޴��� �����ϴ� �Լ�, �Ž������� ó���ϴ� �Լ�, ������ ������ �ִ� �Լ��� ���
 ***/
class VendMachine
{
	Item* m_Menu; //�Ǹ����� ����� ����� ����Ű�� ����ü ������
	int InMoney; //���Ǳ⿡ �Է��� �ݾ�
	int ItemNum; //������ ǰ�� ��ȣ
	int Change; //�ܵ�(�Ž�����)
public:
	VendMachine(); //������ �Լ�
	~VendMachine(); // �Ҹ��� �Լ�

	void DisplayMenu(); //�޴� �����Լ�
	void GetMoney(); //�޴� ����Լ�
	void SelectItem(); //�����Է���
	void CalcChange();//����� ǰ�� �����Լ�
	void GiveItem();//���� �����ϴ� �Լ�(�׳� ����Ϳ� �޽����� ����ϵ����Ѵ�.)
};


//���⼭���� �ʿ����
// ������ �Լ����� ��ü�� �⺻ �޴������� ����ü�� ����ִ� ����� �ʱ�ȭ ��Ų��. 
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

//Ȥ�ø𸣴� �ؿ� �ϳ��� ������ ���� �غ���
// �޴� �����Լ����� �����ϰ���� �޴��� ������ ������ ���ϴ� �޴��� ���� �����ϴ�.
void VendMachine::SetMenu(Item* Menu)
{
	int i, choice, sort, count = 0;

	cin >> choice;
	if (choice == 0) {
		while (count != Item_MAX) {
			cout << "������ �����÷��� 0, ���� �ϰ� ���� �׸��� ��ȣ�� �Է��ϼ���. >> ";
			cin >> sort;
			if (sort == 0)
				break;
			else if (sort > 0 && sort <= 6) {
				cout << "ǰ��� : ";
				Menu[sort - 1].Name = new char[50];
				fflush(stdin);
				cin >> Menu[sort - 1].Name;
				cout << "���� : ";
				cin >> Menu[sort - 1].Price;
				count++;
			}
			else
				cout << "���� �޴��Դϴ�. �ٽ� �Է��ϼ���.\n";
		}
	}
	for (i = 0; i < Item_MAX; i++)
		m_Menu[i] = Menu[i];
}


//���⼭���ʹ� ��ġ��
//�޴� �����ֱ�
void VendMachine::DisplayMenu()
{
	int i;

	cout << "@__@ �޴��� @__@\n";

	for (i = 0; i < Item_MAX; i++)
		cout << i + 1 << " " << m_Menu[i].Name << " " << m_Menu[i].Price << endl;

	cout << "@______________@\n";
}

void VendMachine::GetMoney()
{
	cout << "�ݾ��� �Է��ϼ���(1000��, 500��, 100����) : ";

	while (1)
	{
		cin >> InMoney;

		if (InMoney % 100 == 0)
			break;

		else
			cout << "�ݾ� ������ �߸� �Ǿ����ϴ�. �ٽ� �Է��ϼ���\n";
	}
}

void VendMachine::SelectItem()
{
	cout << "�޴��� �����ϼ���(���ϴ� ��ȣ�� �Է��ϼ���)? ";

	while (1) {
		cin >> ItemNum;

		if (ItemNum > 0 && ItemNum <= 6)
			break;

		else
			cout << "���� �޴� �Դϴ�. �ٽ� �Է��ϼ���\n";
	}
}

void VendMachine::CalcChange()
{
	Change = InMoney - m_Menu[ItemNum - 1].Price;
}

void VendMachine::GiveItem()
{
	if (Change >= 0) {
		cout << m_Menu[ItemNum - 1].Name << "��(��) ��µǾ����ϴ�. ���ְ� �弼��!\n";
		cout << Change << "���� ���ҽ��ϴ�. �����մϴ�!\n";
	}
	else {
		cout << "�ݾ��� �����մϴ�. ";
		cout << -Change << "���� �� �Է��ϼ���.\n";
	}
	cout << "�ڵ��Ǹű� �ùķ��̼��� ����Ǿ����ϴ�.\n";
}

/***
 * �����Լ������� �켱 ���Ǳ� ��ü�� AA�� ������ش�.
 * ������ �Լ��� ���� ���Ǳ� �޴��� ����ü�� ����ִ� ����� �ʱ�ȭ�� �Ǿ� ��µȴ�.
 * AA.SetMenu(Menu) �Լ����� �޴��� �����ؼ� �ٽ� ����� �޴��� AA.DisplayMenu() �Լ��� ȣ���ؼ� ����Ѵ�.
 * AA.GetMoney(), AA.SelectItem(), AA.CalcChange(), AA.GiveItem() �Լ��� ȣ���� ���Ǳ� ���α׷��� ����ǰ� �Ѵ�.
 ***/
int main()
{
	VendMachine AA; //�ڵ� �Ǹű� ��ü �Ѵ븦 ����
	AA.SetMenu(Item * Menu);
	AA.DisplayMenu();
	AA.GetMoney();
	AA.SelectItem();
	AA.CalcChange();
	AA.GiveItem();

	return 0;
}