#pragma once

#include "stdafx.h"
#include <iostream>

using namespace std;

namespace starbuzz_beverage{

	class Beverage {
	protected:
		string description = "Unknown Beverage";
	public:
		string getDescription(void) { return description; };
		virtual double cost(void) = 0;
	};

}