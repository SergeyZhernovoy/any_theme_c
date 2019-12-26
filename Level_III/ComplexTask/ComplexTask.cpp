// ComplexTask.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

template<class C, class T> C cast(T a);

int main()
{
    std::cout << "Hello World!\n";
	std::cout << "\nCast float -> int: " << cast<int, float>(3.5);
	std::cout << "\nCast double -> int: " << cast<int, double>(3.5);
	std::cout << "\nCast int -> double: " << cast<double, int>(3);

}

template<class C, class T> C cast(T a)
{
	return static_cast<C>(a);
}

