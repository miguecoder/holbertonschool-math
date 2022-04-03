#include "holberton.h"
#include <math.h>
/**
 * argument - Function that returns the argument of a given
 * complex number.
 * @c: a complex number
 * Return: Argument of a complex number
 */
double argument(complex c)
{
	double arg = 0;

	arg = atan(c.im / c.re);
	return (arg);
}
