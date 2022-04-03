#include "holberton.h"
/**
 * display_complex_number -  function that displays the complex
 * numbers, followed by a new line.
 * @c: a complex number.
 * Return: nothing.
 */
void display_complex_number(complex c)
{
	if (c.re == 0)
	{
		if (c.im > 0)
		{
			printf("%.0fi\n", c.im);
		}
		else if (c.im < 0)
		{
			printf("- %.0f*-1i\n", c.im);
		}
		else
		{
		}
	}
	else if (c.re != 0)
	{
		if (c.im > 0)
		{
			if (c.im == 1)
				printf("%.0f + i\n", c.re);
			else
				printf("%.0f + %.0fi\n", c.re, c.im);
		}
		else if (c.im < 0)
		{
			if (c.im == -1)
				printf("%.0f - i\n", c.re);
			else
				printf("%.0f - %.0f*-1i\n", c.re, c.im);
		}
		else
		{
			printf("%.0f\n", c.re);
		}
	}
}
