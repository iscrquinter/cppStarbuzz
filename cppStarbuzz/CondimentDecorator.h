#pragma once
#pragma once
#include "stdafx.h"
#include "Beverage.h"

using namespace starbuzz_beverage;

namespace starbuzz_decorator {
	class CondimentDecorator : public Beverage
	{
	public:
		virtual char* getDescription(void) = 0;
	};
}
