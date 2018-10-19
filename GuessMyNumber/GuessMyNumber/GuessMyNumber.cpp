// GuessMyNumber.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	cout << "\nWelcome to Guess My Number\n\n";
	enum sideRandom {COMPUTER, HUMAN};
	sideRandom side = COMPUTER;
	cout << "Who will make number ?\n 0 - computer\n 1 -human\n>";
	int choice;
	cin >> choice;
	switch (choice)
	{ 
	case COMPUTER:
		side = COMPUTER;
		break;
	case HUMAN:
		side = HUMAN;
		break;
	default:
		break;
	}
	int secretNumber;
	int tries = 0;
	int guess;
	if (choice == COMPUTER) {
		srand(static_cast<unsigned int>(time(0)));
		secretNumber = rand() % 100 + 1;
		tries = 0;
		guess;

		do
		{
			cout << "Enter a guess:";
			cin >> guess;
			tries++;

			if (guess > secretNumber)
			{
				cout << "Too high!\n\n";
			}
			else if (guess < secretNumber)
			{
				cout << "Too low!\n\n";
			}
			else
			{
				cout << "\nThat's it ! You got it in " << tries << " guesses!\n";
			}
		} while (guess != secretNumber);
	}
	else
	{
		cout << "\n\nPlease enter number:";
		cin >> secretNumber;
		
		int range = 100;
		do
		{
			srand(static_cast<unsigned int>(time(0)));
			guess = rand() % range + 1;
			tries++;
			cout << "A guess is " << guess << endl;
			if (guess > secretNumber)
			{
				cout << "Too high!\n\n";
			}
			else if (guess < secretNumber)
			{
				cout << "Too low!\n\n";
			}
			else
			{
				cout << "\nThat's it ! You got it in " << tries << " guesses!\n";
			}
		} while (guess != secretNumber);



	}
	

	return 0;
}


int getNumber()
{
	return 0;
};

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
