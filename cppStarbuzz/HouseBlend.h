#pragma once

#include "stdafx.h"
#include "Beverage.h"
#include <iostream>

using namespace std;

namespace starbuzz_beverage {
	class HouseBlend : public Beverage {
	public:
		string getDescription(void);
		double cost(void);
	};

	string HouseBlend::getDescription()
	{
		return "House Blend Coffee";
	}

	double HouseBlend::cost()
	{
		return 0.89;
	}
}
