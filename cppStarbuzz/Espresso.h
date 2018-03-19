#pragma once

#include "stdafx.h"
#include "Beverage.h"
#include <iostream>

using namespace std;

namespace starbuzz_beverage {
	class Espresso : public Beverage {
	public:
		string getDescription(void);
		double cost(void);
	};

	string Espresso::getDescription()
	{
		return "Espresso";
	}

	double Espresso::cost()
	{
		return 1.99;
	}
}
