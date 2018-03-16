#include "stdafx.h"
#include <iostream>

namespace starbuzz_beverage{

	class Beverage {
		char description[31] = "Unknown Beverage";
	public:
		virtual char* getDescription(void);
		virtual double cost(void) = 0;
	};

	char* Beverage::getDescription()
	{
		return description;
	}

	class DarkRoast : public Beverage {
	public:
		char* getDescription(void);
		double cost(void) = 0;
	};

	char* DarkRoast::getDescription()
	{
		return (char *) "Dark Roast Coffee";
	}

	double DarkRoast::cost()
	{
		return 0.99;
	}

	class Decaf : public Beverage {
	public:
		char* getDescription(void);
		double cost(void) = 0;
	};

	char* Decaf::getDescription()
	{
		return (char *) "Decaf Coffee";
	}

	double Decaf::cost()
	{
		return 1.05;
	}

	class Espresso : public Beverage {
	public:
		char* getDescription(void);
		double cost(void) = 0;
	};

	char* Espresso::getDescription()
	{
		return (char *) "Espresso";
	}

	double Espresso::cost()
	{
		return 1.99;
	}

	class HouseBlend : public Beverage {
	public:
		char* getDescription(void);
		double cost(void) = 0;
	};

	char* HouseBlend::getDescription()
	{
		return (char *) "House Blend Coffee";
	}

	double HouseBlend::cost()
	{
		return 0.89;
	}
}