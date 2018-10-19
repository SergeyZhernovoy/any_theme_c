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