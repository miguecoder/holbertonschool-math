#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	complex c1, c2, c3;
	/*double mod;*/

	printf("Check display_complex_number:\n");
	c1.re = 1;
	c1.im = 2;
	display_complex_number(c1);
	c1.re = 1;
	c1.im = 0;
	display_complex_number(c1);
	c1.re = 1;
	c1.im = -2;
	display_complex_number(c1);
	printf("Check conjugate:\n");
	c1.re = 1;
	c1.im = 2;
	c1 = conjugate(c1);
	display_complex_number(c1);
	c1 = conjugate(c1);
	display_complex_number(c1);
	/*
	 * printf("Check modulus:\n");
	 * c1.re = 1;
	 * c1.im = 2;
	 */
	c1.re = 4;
	c1.im = 3;
	c2.re = 2;
	c2.im = 1;
	display_complex_number(c1);
	display_complex_number(c2);
	division(c1, c2, &c3);
	display_complex_number(c3);
	return (0);

}
