// Financial_Cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <boost/array.hpp>
#include "Interest.h"

int main(int argc, const char * argv[])
{
	double rt = atof(argv[1]);
	double val = atof(argv[2]);
	double periods = atof(argv[3]);

	/***************Pass values to calculate the one period amounts*******************************/
	/* */
	InterestCalc ircalculator(rt);
	double res = ircalculator.OnePeriod(val);
	std::cout << "The one period amount is : \t$" << res << std::endl;
	
	/**************Pass values to the multiperiod and continuous compounding*********************/
	/**/
	CompoundRtCalc crate(rt);
	std::cout << "The multi-period amount is : \t$" << crate.multiPeriod(val, periods) << std::endl;
	std::cout << "The continuous amount is : \t$" << crate.contCompound(val, periods) << std::endl;

}

