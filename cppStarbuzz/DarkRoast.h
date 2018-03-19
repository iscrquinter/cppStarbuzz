#pragma once

#include "stdafx.h"
#include "Beverage.h"
#include <iostream>

using namespace std;

namespace starbuzz_beverage {
	class DarkRoast : public Beverage {
	public:
		DarkRoast(void);
		double cost(void);
	};

	DarkRoast::DarkRoast()
	{
		description = "DarkRoast coffee";
	}
	double DarkRoast::cost()
	{
		return 0.99;
	}
}