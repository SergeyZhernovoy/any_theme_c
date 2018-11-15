#pragma once
#include <string>
#include <iostream>
class Fish
{
private:
	std::string name;

public:
	Fish()
	{
		std::cout << "\nFish construct calling\n";
	}
	~Fish()
	{
		std::cout << "\nFish destruct calling\n";
	}
	void SetName(std::string p_name)
	{
		this->name = p_name;
	}

	std::string GetName()
	{
		return name;
	}

	void Swim()
	{
		std::cout << "This fish is swimming" << std::endl;
	}

	void Swim(bool isOcean)
	{
		switch(isOcean)
		{
		case true:
			std::cout << "\nIt's an ocean fish. It's swim\n";
			break;
		case false:
			std::cout << "\nIt's river fish. It's swimm too\n";
			break;
		}

		std::cout << "It's " << GetName() << std::endl;
	}

};

class Treska : public Fish
{
public:
	Treska()
	{
		std::cout << "\nTreska construct calling\n";
	}
	~Treska()
	{
		std::cout << "\nTreska destruct calling\n";
	}
	using Fish::Swim;
	void Swim()
	{
		std::cout << "It's " << GetName() << std::endl;
	}
};