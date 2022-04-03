#include "holberton.h"
#include <math.h>
/**
 * modulus - Function that return the modulus of a given complex number
 * @c: a complex number
 * Return: modulus of a complex number.
 */
double modulus(complex c)
{
	double mod;

	/*squares = ((c.re * c.re) + (c.im * c.im));*/
	/*mod = sqrt(squares);*/
	mod = sqrt(pow(c.re, 2) + pow(c.im, 2));
	return (mod);
}
