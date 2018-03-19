// cppStarbuzz.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Espresso.h"
#include "DarkRoast.h"
#include "Mocha.h"
#include <string>
#include <iostream>

using namespace std;

using namespace starbuzz_beverage;
using namespace starbuzz_decorator;


int main()
{	
	cout << "Starbuzz ..." << endl;

	Beverage* beverage = new Espresso;

	cout << beverage->getDescription() << " $" << beverage->cost() << endl;
	system("PAUSE");

	Beverage* beverage2 = new DarkRoast;

	cout << beverage2->getDescription() << " $" << beverage2->cost() << endl;

	beverage2 = new Mocha(beverage2);

	cout << beverage2->getDescription() << " $" << beverage2->cost() << endl;

	system("PAUSE");
	return 0;
}

