#include "holberton.h"
/**
 * conjugate - function that returns the conjugate
 * of a given complex number
 * @c: complex number
 * Return: a complex number conjugate
 */
complex conjugate(complex c)
{
	complex conj;

	conj.re = c.re;
	conc.im = c.im * -1;
	return (conj);
}
