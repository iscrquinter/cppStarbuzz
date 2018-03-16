#pragma once

#include "stdafx.h"
#include "Beverage.h"

namespace starbuzz_beverage {
	class Espresso : public Beverage {
	public:
		char* getDescription(void);
		double cost(void);
	};

	char* Espresso::getDescription()
	{
		return (char *) "Espresso";
	}

	double Espresso::cost()
	{
		return 1.99;
	}
}
