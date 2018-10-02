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

	Sample(const Sample& copy)
	{
		
			age = copy.age;
			if (copy.name != nullptr)
			{
				name = new char[strlen(copy.name) + 1];
				strcpy(name, copy.name);
			}
	}

	//перемещающий конструктор , предназначен для избегания повторного копирования и падения производительностви.
	// такой конструктор позволяет избежать глубокого копирования

	Sample(Sample&& moveSample)
	{
		if (moveSample.name != nullptr)
		{
			name = moveSample.name;
			moveSample.name = nullptr;
		}
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