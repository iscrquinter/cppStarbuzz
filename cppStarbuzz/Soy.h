#pragma once
#include "stdafx.h"
#include "Beverage.h"
#include "CondimentDecorator.h"

using namespace std;
using namespace starbuzz_beverage;

namespace starbuzz_decorator {
	class Soy : public CondimentDecorator
	{
		Beverage* beverage;
	public:
		Soy(Beverage *);
		string getDescription(void) override;
		double cost(void)
	};

	Soy::Soy(Beverage *beverage)
	{
		this->beverage = beverage;
	}

	string Soy::getDescription(void)
	{
		return beverage->getDescription() + ", Soy";
	}

	double Soy::cost(void)
	{
		return 0.15 + beverage->cost();
	}
}
