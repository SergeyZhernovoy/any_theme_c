#pragma once
#include <iostream>
#include <string>
using namespace std;



class President
{
private:
	President() {};
	President(const President&);
	const President& operator=(const President&);
	string name;

public:
	static President& GetInstance()
	{
		static President onlyInstance;
		return onlyInstance;
	}

	string GetName(Sample sample)
	{
		const string str = sample.name;
		return name + " say  "+ str;
	}

	void SetName(string InputName)
	{
		name = InputName;
	}

};