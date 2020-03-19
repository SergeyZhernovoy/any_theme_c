// PrataLesson.cpp : строк файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "LessonOne.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;
	int point = {};
	cout << "Запустить урок 1 ? (напечатайте 1 - да 0 - нет):";
	cin >> point;
	if (point) 
	{
		Lesson1();
	}
	
	return 0;
}
