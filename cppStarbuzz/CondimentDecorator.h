#pragma once
#include "stdafx.h"
#include "Beverage.h"
#include <iostream>

using namespace std;
using namespace starbuzz_beverage;

namespace starbuzz_decorator {
	class CondimentDecorator : public Beverage
	{
	public:
		virtual string getDescription(void) = 0;
	};
}
