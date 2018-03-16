#pragma once

#include "stdafx.h"
#include "Beverage.h"

namespace starbuzz_beverage {
	class HouseBlend : public Beverage {
	public:
		char* getDescription(void);
		double cost(void);
	};

	char* HouseBlend::getDescription()
	{
		return (char *) "House Blend Coffee";
	}

	double HouseBlend::cost()
	{
		return 0.89;
	}
}
