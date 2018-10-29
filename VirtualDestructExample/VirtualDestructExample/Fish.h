#pragma once
#include <iostream>
class Fish
{
public:
	Fish()
	{
		std::cout << "\nCreate Fish\n";
	}
	virtual ~Fish()
	{
		std::cout << "\nDestroy Fish\n";
	}
	virtual void Cry() = 0;
};


class Tuna: public Fish
{
public:
	Tuna()
	{
		std::cout << "\nCreate Tuna\n";
		std::cout << "\nOutput octal " << std::oct << 10 << std::endl;
		std::cout << "\nOutput hex " << std::hex << 10 << std::endl;
	}
	~Tuna()
	{
		std::cout << "\nDestroy Tuna\n";
	}
	void Cry()
	{
		std::cout << "\nTuna cry\n";
	}
};