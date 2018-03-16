#pragma once

#include "stdafx.h"
#include "Beverage.h"

namespace starbuzz_beverage {

	class Decaf : public Beverage {
	public:
		char* getDescription(void);
		double cost(void);
	};

	char* Decaf::getDescription()
	{
		return (char *) "Decaf Coffee";
	}

	double Decaf::cost()
	{
		return 1.05;
	}
}