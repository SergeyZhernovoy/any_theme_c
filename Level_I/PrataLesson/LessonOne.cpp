#include "LessonOne.h"
#define FARLONG_TO_YARD 220
#define FARLONG_TO_METER 201168

const int  MONTH_IN_YEAR = 12;

void Lesson1(void) {
	setlocale(LC_ALL, "Russian");
	using namespace std;
	if (0) 
	{
		cout << endl << "1) ������ ����� � ������" << endl;
		PrintMyAddress();
		cout << endl << "2) �������� ��������� � ����" << endl;
		TranslateFarlongToYard();
		cout << endl << "3) ����� ������� ��������� ���\n";
		SayPokerOne();
		SayPokerOne();
		SayPokerTwo();
		SayPokerTwo();
		cout << endl << "4) ����� ������ ���� wchar_t\n";
		NewCplusplusType();
		cout << endl << "5) ������� ����������� � ���� � ����� ";
		CastType();
		cout << endl << "6) ������ �� ���������� ";
		StructUnionType();
	}
	cout << endl << "7) ������ � poointer\n";
	Pointer();

}

void PrintMyAddress(void)
{
	using namespace std;
	int age = {};
	cout << "my name is S" << endl;
	cout << "my address - Russia" << endl;
	cout << "������� ���� �������: ";
	cin >> age;
	cout << "��� ������� ��� " << age * MONTH_IN_YEAR << endl;
}

void TranslateFarlongToYard()
{
	using namespace std;
	int farlong(0);
	cout << "������� ����� � ��������� :";
	cin >> farlong;
	cout << endl << "�� ����� " << farlong << " ��������� " 
		<< "��� " << farlong * FARLONG_TO_YARD <<  " �����" 
		<< " ��� " << farlong * FARLONG_TO_METER << " ������" << endl;
}

void SayPokerOne()
{
	std::cout << "Three blind mice\n";
}

void SayPokerTwo()
{
	std::cout << "See how they run\n";
}

void NewCplusplusType()
{
	wchar_t result = L'Hello world !';
	std::wcout << result << std::endl;
	std::cout.put('D');

}

void CastType()
{
	using namespace std;
	int height {0};
	cout << "������� ���� � �����������:___\b\b\b";
	cin >> height;
	cout << "��� ���� � ����� = " << height / 30.48 << " � ������ = " << height / 2.54;

}

void StructUnionType()
{
	struct product 
	{
		int price;
		std::string name;
	};

	product one{ 10, "cheese"};
	product two{};

	std::cout << "\none.name " << one.name << " one.price " << one.price;
	two = one;
	std::cout << "\ntwo.name " << two.name << " two.price " << two.price;
	two.name = "meat";
	std::cout << "\ntwo.name " << two.name << " two.price " << two.price;

	struct auto_register_sx 
	{
		unsigned int SN : 4;
		unsigned int : 4;
		bool goodIn : 1;
		bool goodToogle : 1;
	};


}

void Pointer()
{
	int* pointer = nullptr, travis = 5;
	pointer = &travis;
	*pointer = 1;
	std::cout << "pointer address equal " << pointer;
}
