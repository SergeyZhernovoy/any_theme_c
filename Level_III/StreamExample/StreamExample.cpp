// StreamExample.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	// create file
	ofstream dragons("dragons.txt");
	if (dragons.is_open())
	{
		dragons << "Медный дракон" << endl
				<< "Бронзовый дракон" << endl
				<< "Серебрянный дракон" << endl
				<< "Золотой дракон" << endl;
	}
	dragons.close();
	// read and print file
	ifstream dragonis("dragons.txt");
	char buffer[50];
	if (!dragonis.is_open())
	{
		cout << "Error, couldn't open file";
		exit(1);
	}

	while (!dragonis.eof())
	{
		dragonis.getline(buffer, 49);
		cout << buffer << endl;
	}
	dragonis.close();

	/**
	* определим размер размер файла
	*
	*/
	int n1, n2;
	ifstream dragonq("dragons.txt", ios::in|ios::binary);
	n1 = dragonq.tellg();
	dragonq.seekg(0, ios::end);
	n2 = dragonq.tellg();
	cout << "\nSize file dragons.txt: " << n2 - n1 << endl;
	return 0;
}

