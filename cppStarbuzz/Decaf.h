#pragma once

#include "stdafx.h"
#include "Beverage.h"
#include <iostream>

using namespace std;

namespace starbuzz_beverage {

	class Decaf : public Beverage {
	public:
		double cost(void);
	};

	double Decaf::cost()
	{
		return 1.05;
	}
}