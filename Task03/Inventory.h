#pragma once
#include <iostream>
#include "Weapon.h"
using namespace std;

template <typename T>
class Inventory
{
private:
	T* pItems_;
	int capacity_;
	int size_ = 0;

public:
	Inventory(int capacity = 10)
	{
		if (capacity <= 0)
		{
			capacity_ = 1;
		}
		else
		{
			capacity_ = capacity;
		}

		pItems_ = new T[capacity_];
	};

	~Inventory()
	{
		delete[] pItems_;
		pItems_ = nullptr;
	}

	void AddItem(const T& item)
	{
		if (capacity_ > size_)
		{
			pItems_[size_] = item;

			++size_;
		} 
		else
		{
			cout << "인벤토리가 꽉 찼습니다!"<<endl;
		}
	}

	void RemoveLastItem()
	{
		if (size_ < 1)
		{
			cout << "인벤토리가 비어있습니다."<<endl;
		}
		else
		{
			--size_;
		}
	}

	int GetSize() const
	{
		return size_;
	}

	int GetCapacity() const
	{
		return capacity_;
	}

	void PrintALLItems() const
	{
		if (size_ <= 0)
		{
			cout << "인벤토리가 비어있습니다."<<endl;
		}
		else
		{
			for (int i = 0; i < size_; ++i)
			{
				pItems_[i].PrintInfo();
			}
		}
	}

};
