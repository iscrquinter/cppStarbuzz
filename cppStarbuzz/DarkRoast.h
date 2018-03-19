#pragma once

#include "stdafx.h"
#include "Beverage.h"
#include <iostream>

using namespace std;

namespace starbuzz_beverage {
	class DarkRoast : public Beverage {
	public:
		string getDescription(void);
		double cost(void);
	};

	string DarkRoast::getDescription()
	{
		return "Dark Roast Coffee";
	}

	double DarkRoast::cost()
	{
		return 0.99;
	}
}