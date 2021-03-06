// cppStarbuzz.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Espresso.h"
#include "DarkRoast.h"
#include "Mocha.h"
#include "Whip.h"
#include "HouseBlend.h"
#include "Soy.h"
#include <string>
#include <iostream>

using namespace std;

using namespace starbuzz_beverage;
using namespace starbuzz_decorator;


int main()
{	
	cout << "Starbuzz ..." << endl;
	cout << "============" << endl;

	Beverage* beverage = new Espresso;

	cout << beverage->getDescription() << " $" << beverage->cost() << endl;

	Beverage* beverage2 = new DarkRoast;

	beverage2 = new Mocha(beverage2);
	beverage2 = new Mocha(beverage2);
	beverage2 = new Whip(beverage2);
	cout << beverage2->getDescription() << " $" << beverage2->cost() << endl;

	Beverage* beverage3 = new HouseBlend;

	beverage3 = new Soy(beverage3);
	beverage3 = new Mocha(beverage3);
	beverage3 = new Whip(beverage3);
	cout << beverage3->getDescription() << " $" << beverage3->cost() << endl;

	system("PAUSE");

	return 0;
}