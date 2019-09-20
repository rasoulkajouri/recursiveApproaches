#include "trapezoidal.h"
long double trapezoidal (double lower, double upper, long steps){

	long double step = ( upper - lower ) / (double) steps ;

	long double f_upp = func( upper ) * 0.50;
	long double f_low = func( lower ) * 0.50;

	long numerator = 1;
	long double summation = sum( numerator, step, lower, steps - 1 );

	return ( summation + f_upp + f_low ) * step; 

}

long double sum ( long j, long double stp, double lwr, long stps){

	if (j == stps)
		return func(j * stp + lwr );
	else
		return func (j * stp + lwr) + sum( ++j, stp, lwr, stps);
}
