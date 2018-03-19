#pragma once

#include "stdafx.h"
#include "Beverage.h"
#include <iostream>

using namespace std;

namespace starbuzz_beverage {
	class Espresso : public Beverage {
	public:
		Espresso(void);
		double cost(void);
	};

	Espresso::Espresso(void)
	{
		description = "Espresso";
	}

	double Espresso::cost()
	{
		return 1.99;
	}
}
