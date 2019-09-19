#include "bisection.h"
double bisection (double x1, double x2, long double c, long double d){

	if ( func(x1) * func(x2) > 0 ){
	
		std::cout << "*** Fatal Error!, There is no root at this distance.\n";
		exit(0);
	}

	double x = (x1 + x2) * 0.5;

	if ( std::abs(x1 - x2) < c || std::abs(func(x)) < d )
		return x;
	
	if ( func(x1) * func(x) < 0)
		x2 = x;
	else 
		x1 = x;

	return bisection (x1, x2, c, d);

}
