#include "Weapon.h"

Weapon::Weapon(string name, int price)
{
	name_ = name;
	price_ = price;
}

void Weapon::PrintInfo()
{
	cout << "[이름: " << name_ << ", 가격: " << price_ << "G]" << endl;
}