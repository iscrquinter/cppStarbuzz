#pragma once

#include "stdafx.h"
#include "Beverage.h"
#include <iostream>

using namespace std;

namespace starbuzz_beverage {

	class Decaf : public Beverage {
		Decaf(void);
	public:
		double cost(void);
	};

	Decaf::Decaf(void)
	{
		description = "Decaf Cofeee";
	}

	double Decaf::cost()
	{
		return 1.05;
	}
}