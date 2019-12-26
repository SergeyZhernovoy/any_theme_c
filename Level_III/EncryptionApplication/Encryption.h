#pragma once
#include <fstream>
#include <iostream>
using namespace std;

class Encryption 
{
private: 
	fstream file1;
	fstream file2;

public:
	Encryption(const char* filename1, const char* filename2);
	void Encrypt(void);
	void close(void);
};
