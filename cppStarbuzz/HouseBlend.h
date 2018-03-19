#pragma once

#include "stdafx.h"
#include "Beverage.h"
#include <iostream>

using namespace std;

namespace starbuzz_beverage {
	class HouseBlend : public Beverage {
	public:
		HouseBlend(void);
		double cost(void);
	};

	HouseBlend::HouseBlend(void)
	{
		description = "House Blend Coffee";
	}
	double HouseBlend::cost()
	{
		return 0.89;
	}
}
