//Main.cpp

#include "Inventory.h"
#include "Weapon.h"

int main(void)
{
	Inventory<Weapon> myinventory(10);


	myinventory.AddItem(Weapon("bow", 1000));
	myinventory.AddItem(Weapon("sword", 3000));
	myinventory.AddItem(Weapon("wand", 1500));

	myinventory.PrintALLItems();

	myinventory.RemoveLastItem();
			
	myinventory.PrintALLItems();

	return 0;
}
