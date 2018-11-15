#pragma once
#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#define ECHO(text) std::cout << text

class Bow
{
private:
	std::string color;
	bool drawn;
	int num_of_arrows;
public:
	Bow(std::string color);
	virtual ~Bow();
	void draw();
	int fire();
};