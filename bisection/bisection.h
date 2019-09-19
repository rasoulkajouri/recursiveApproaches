#ifndef BISECTION_H
#define BISECTION_H

#include <cmath>
#include <iostream>

double bisection (double x1, double x2, long double c, long double d);

inline double func (double var){

	return 2.0 * var * var - 4.0 ;

}

#endif // BISECTION_H
