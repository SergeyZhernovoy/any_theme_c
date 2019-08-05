#pragma once
class Human
{
private:
	int age;
public:
	explicit Human(int age)
	{
		this->age = age;
	}

	const int GetAge() const
	{
		return age;
	};

};