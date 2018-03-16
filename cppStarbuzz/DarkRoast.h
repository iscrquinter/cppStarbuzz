#pragma once

#include "stdafx.h"
#include "Beverage.h"

namespace starbuzz_beverage {
	class DarkRoast : public Beverage {
	public:
		char* getDescription(void);
		double cost(void);
	};

	char* DarkRoast::getDescription()
	{
		return (char *) "Dark Roast Coffee";
	}

	double DarkRoast::cost()
	{
		return 0.99;
	}
}