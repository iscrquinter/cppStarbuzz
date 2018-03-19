#pragma once
#include "stdafx.h"
#include "Beverage.h"
#include "CondimentDecorator.h"

using namespace std;
using namespace starbuzz_beverage;

namespace starbuzz_decorator {
	class Milk : public CondimentDecorator
	{
		Beverage* beverage;
	public:
		 Milk(Beverage *);
		 string getDescription(void);
		 double cost(void)
	};

	Milk::Milk(Beverage *beverage)
	{
		this->beverage = beverage;
	}

	string Milk::getDescription(void)
	{
		return beverage->getDescription() + ", Milk";
	}

	double Milk::cost(void)
	{
		return 0.10 + beverage->cost();
	}
}