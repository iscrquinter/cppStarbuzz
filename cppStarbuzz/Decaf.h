#pragma once

#include "stdafx.h"
#include "Beverage.h"
#include <iostream>

using namespace std;

namespace starbuzz_beverage {

	class Decaf : public Beverage {
	public:
		string getDescription(void);
		double cost(void);
	};

	string Decaf::getDescription()
	{
		return "Decaf Coffee";
	}

	double Decaf::cost()
	{
		return 1.05;
	}
}