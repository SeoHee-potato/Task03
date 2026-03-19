#pragma once
#include <string>
#include <iostream>

using namespace std;

class Weapon
{
private:

	string name_;
	int price_;

public:

	Weapon() {};
	Weapon(string name, int price);

	void PrintInfo();

};

