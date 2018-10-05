#pragma once
#include <iostream>
union SimpleUnion
{
	int num;
	char alphabet;
};

struct ComplexType
{
	enum DataType
	{
		Int,
		Char
	} Type;

	union Value
	{
		int num;
		char alphabet;

		Value() {}
		~Value() {}
	} value;
};

void DisplayComplexType(const ComplexType& obj)
{
	switch (obj.Type)
	{
	case ComplexType::Int:
		std::cout << "union consist number: " << obj.value.num;
		break;
	case ComplexType::Char:
		std::cout << "union consist number: " << obj.value.alphabet;
		break;
	}
}