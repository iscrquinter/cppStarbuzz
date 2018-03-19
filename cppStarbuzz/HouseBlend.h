#pragma once

#include "stdafx.h"
#include "Beverage.h"
#include <iostream>

using namespace std;

namespace starbuzz_beverage {
	class HouseBlend : public Beverage {
	public:
		double cost(void);
	};

	double HouseBlend::cost()
	{
		return 0.89;
	}
}
