#ifndef TRAPEZOIDAL_H
#define TRAPEZOIDAL_H

#include <cmath>

long double trapezoidal (double, double, long);
long double sum (long, long double, double, long);

inline long double func ( long double x ){

	return std::sin(x);
}

#endif // TRAPEZOIDA_H
