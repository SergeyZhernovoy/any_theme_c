#include <iostream>


class Sample
{

private:
	char* name;
	int age;
public:
	
	Sample(const char* initString, int iAge)
	{
		std::cout << "\nConstructor2 called";
		if (initString != nullptr)
		{
			name = new char[strlen(initString) + 1];
			strcpy(name, initString);
		}
		else 
		{
			name = nullptr;
		}
		age = iAge;
	}
	const char* GetName();
	const int GetAge();
	const int GetLength();
	~Sample();
};

const char* Sample::GetName()
{
	return name;
}

const int Sample::GetAge()
{
	return age;
}

const int Sample::GetLength()
{
	return strlen(name);
}

Sample::~Sample()
{
	std::cout << "\nDestructor2 called";
	if (name != nullptr) 
	{
		delete[] name;
	}
}