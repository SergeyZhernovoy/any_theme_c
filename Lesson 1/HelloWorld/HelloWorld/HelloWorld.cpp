// HelloWorld.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

enum WindowProperties
{
	Bordered = 1 << 0, //001
	Transparent = 1 << 1, //010
	Modal = 1 << 2,  //100
	BorderModal = 1 << 0 | 1 << 2
};

int main()
{
	WindowProperties wp = BorderModal;
    std::cout << "Hello World!\n"; 
	if (wp & Modal)
	{
		std::cout << "Window modal!\n";
	}
}


