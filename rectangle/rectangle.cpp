#include "rectangle.h"
long double rectangle (double lower, double upper, long steps){

	long double step = ( upper - lower ) / (double) steps ;

	long double summation = sum( 0, step, lower, steps );

	return summation * step; 

}

long double sum ( long j, long double stp, double lwr, long stps){

	if (j == stps)
		return func( (j + 0.5)  * stp + lwr );
	else
		return func ( (j + 0.5) * stp + lwr) + sum( ++j, stp, lwr, stps);
}
