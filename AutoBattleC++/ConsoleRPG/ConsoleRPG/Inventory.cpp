#include "Inventory.h"

Inventory::Inventory()
{
	this->cap = 10;
	this->nrOfItems = 0;
	this->itemsArr = new Item*[cap];
}

Inventory::~Inventory()
{
	for (size_t i = 0; i < this->nrOfItems; i++)
	{
		delete this->itemsArr[i];
	}
	delete[] itemsArr;
}

void Inventory::expand()
{
	this->cap *= 2;

    Item **tempArr = new Item*[this->cap];

	for (size_t i = 0; i < this->nrOfItems; i++)
	{
		tempArr[i] = new Item(*this->itemsArr[i]);
	}

	for (size_t i = 0; i < this->nrOfItems; i++)
	{
		delete this->itemsArr[i];
	}
	delete[] this->itemsArr;

	this->itemsArr = tempArr;

	this->initialize(this->nrOfItems);
}

void Inventory::initialize(const int from)
{
	for (size_t i = 0; i < cap; i++)
	{
		this->itemsArr[i] = nullptr;
	}

}

void Inventory::addItem(const Item& item)
{
	if (this->nrOfItems >= this->cap)
	{
		expand();
	}
	
	this->itemsArr[this->nrOfItems++] = new Item(item);

}

void Inventory::removeItem(int index)
{

}