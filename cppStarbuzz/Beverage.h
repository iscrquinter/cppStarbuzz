#include "stdafx.h"
#include <iostream>

using namespace std;

namespace starbuzz_beverage{

	class Beverage {
		string description = "Unknown Beverage";
	public:
		virtual string getDescription(void) = 0;
		virtual double cost(void) = 0;
	};

	string Beverage::getDescription()
	{
		return description;
	}
}