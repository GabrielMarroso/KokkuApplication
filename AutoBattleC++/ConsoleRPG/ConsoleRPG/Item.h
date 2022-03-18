#pragma once
#include<string>
#include<iostream>
#include<iomanip>

class Item
{
private: 

	std::string name;
	int sellValue;
	int buyValue;

public:
	Item();
	virtual ~Item();

	inline std::string debugPrint() const { return this->name; }

};

