#include "holberton.h"
#include <math.h>
/**
 * complex_from_mod_arg - Function that performs the division operation
 * to complex numbers.
 * @m: module of a number complex
 * @arg: argument of a complex number
 * @c3: complex number to get
 * Return: nothing
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	(*c3).im = m * sin(arg);
	(*c3).re = m * cos(arg);
}
