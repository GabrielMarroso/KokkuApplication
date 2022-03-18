#pragma once
#include"Item.h"

class Inventory
{

private: 
	int cap;
	int nrOfItems;
	Item **itemsArr;
	void expand();
	void initialize(const int from);


public:
	Inventory();
	virtual ~Inventory();
	void addItem(const Item& item);
	void removeItem(int index);
	inline void debugPrint() const
	{
		for (size_t i = 0; i < this->nrOfItems; i++)
		{
			std::cout << this->itemsArr[i]->debugPrint() << std::endl;
		}
	}
};

