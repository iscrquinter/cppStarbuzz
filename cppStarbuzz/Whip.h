#pragma once
#include "stdafx.h"
#include "Beverage.h"
#include "CondimentDecorator.h"

using namespace std;
using namespace starbuzz_beverage;

namespace starbuzz_decorator {
	class Whip : public CondimentDecorator
	{
		Beverage* beverage;
	public:
		Whip(Beverage *);
		string getDescription(void) override;
		double cost(void);
	};

	Whip::Whip(Beverage *beverage)
	{
		this->beverage = beverage;
	}

	string Whip::getDescription(void)
	{
		return beverage->getDescription() + ", Whip";
	}

	double Whip::cost(void)
	{
		return 0.10 + beverage->cost();
	}
}
