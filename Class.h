#pragma once 

#include <iostream>
#include "Zvenor.h"

class Poezda
{
public:
	Poezda();

	friend std::ostream& operator << (std::ostream &out, const Poezda &poezda)
	{
		out << mark.size << std::endl << mark.CityAndBackTime << std::endl << mark.CityAndFirstTime << std::endl << mark.LeftAmount;
	}
	friend std::istream& operator >> (std::istream &in, const Poezda &poezda)
	{

	}
	int& operator[](int index)
	{
		if (index >= n || index < 0)
			throw IndexBad();
		return mark[index];
	}

	void Bronirovka();
	void Sortirovka();

};