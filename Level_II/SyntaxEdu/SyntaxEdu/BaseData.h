#pragma once
#include <iostream>
#include <string>
using namespace std;
class BigData
{
private:
	~BigData()
	{
		if (blob != nullptr)
		{
			delete blob;
			cout << "Call destructor - delete blob\n";
		} 
		else
		{
			cout << "Call destructor - nothing to delete\n";
		}
	
	};
	string* blob;
public:
	BigData()
	{
		blob = new string;
		cout << "\nCall construct and make blob pointer\n";
	}

	static void DestroyBigData(BigData* bigData)
	{
		if (bigData != nullptr)
		{
			delete bigData;
			
		}
		
	}
};
