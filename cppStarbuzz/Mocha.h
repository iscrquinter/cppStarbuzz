#pragma once
#include "stdafx.h"
#include "Beverage.h"
#include "CondimentDecorator.h"

using namespace std;
using namespace starbuzz_beverage;

namespace starbuzz_decorator {
	class Mocha : public CondimentDecorator
	{
		Beverage* beverage;
	public:
		Mocha(Beverage *);
		string getDescription(void);
		double cost(void)
	};

	Mocha::Mocha(Beverage *beverage)
	{
		this->beverage = beverage;
	}

	string Mocha::getDescription(void)
	{
		return beverage->getDescription() + ", Mocha";
	}

	double Mocha::cost(void)
	{
		return 0.20 + beverage->cost();
	}
}