#include "holberton.h"
/**
 * division - Function that performs the division operation
 * to complex numbers.
 * @c1: first complex number
 * @c2: second complex number
 * @c3: result of division c1 / c2
 * Return: nothing
 */
void division(complex c1, complex c2, complex *c3)
{
	double b = 0;

	b = ((c2.re * c2.re) + (c2.im * c2.im));
	(*c3).re = ((c1.re * c2.re) + (c2.im * c1.im)) / b;
	(*c3).im = ((c1.im * c2.re) - (c1.re * c2.im)) / b;
}