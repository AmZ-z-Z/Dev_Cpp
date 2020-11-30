/* Main header file for project */
#pragma once
#include <iostream>
#include <cmath> // for std::abs()

// epsilon is an absolute value
/* this API for equating between two Floating point for more accuracy*/
bool isAlmostEqual(double a, double b, double epsilon)
{
	// if the distance between a and b is less than epsilon, then a and b are "close enough"
	return std::abs(a - b) <= epsilon;
}

