#include "LessonOne.h"
#define FARLONG_TO_YARD 220
#define FARLONG_TO_METER 201168

const int  MONTH_IN_YEAR = 12;

void Lesson1(void) {
	setlocale(LC_ALL, "Russian");
	using namespace std;
	if (0) 
	{
		cout << endl << "1) печать имени и адреса" << endl;
		PrintMyAddress();
		cout << endl << "2) пересчет фарлонгов в €рды" << endl;
		TranslateFarlongToYard();
		cout << endl << "3) вызов функций несколько раз\n";
		SayPokerOne();
		SayPokerOne();
		SayPokerTwo();
		SayPokerTwo();
		cout << endl << "4) вывод нового типа wchar_t\n";
		NewCplusplusType();
		cout << endl << "5) перевод сантиметров в футы и дюймы ";
		CastType();
		cout << endl << "6) работа со структурой ";
		StructUnionType();
	}
	cout << endl << "7) работа с poointer\n";
	Pointer();

}

void PrintMyAddress(void)
{
	using namespace std;
	int age = {};
	cout << "my name is S" << endl;
	cout << "my address - Russia" << endl;
	cout << "¬ведите свой возраст: ";
	cin >> age;
	cout << "¬ам прожили уже " << age * MONTH_IN_YEAR << endl;
}

void TranslateFarlongToYard()
{
	using namespace std;
	int farlong(0);
	cout << "¬ведите длину в фарлонгах :";
	cin >> farlong;
	cout << endl << "¬ы ввели " << farlong << " фарлонгов " 
		<< "это " << farlong * FARLONG_TO_YARD <<  " €рдов" 
		<< " или " << farlong * FARLONG_TO_METER << " метров" << endl;
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
	cout << "¬ведите рост в сантиметрах:___\b\b\b";
	cin >> height;
	cout << "¬аш рост в футах = " << height / 30.48 << " и дюймах = " << height / 2.54;

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
