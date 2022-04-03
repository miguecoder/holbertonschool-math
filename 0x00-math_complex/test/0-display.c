#include "holberton.h"
/**
 * display_complex_number -  function that displays the complex
 * numbers, followed by a new line.
 * @c: a complex number.
 * Return: nothing.
 */
void display_complex_number(complex c)
{
	if (c.real == 0)
	{
		if (c.imagi > 0)
		{
			printf("%.0fi\n", c.imagi);
		}
		else if (c.imagi < 0)
		{
			printf("- %.0f*-1i\n", c.imagi);
		}
		else
		{
		}
	}
	else if (c.real != 0)
	{
		if (c.imagi > 0)
		{
			if (c.imagi == 1)
				printf("%.0f + i\n", c.real);
			else
				printf("%.0f + %.0fi\n", c.real, c.imagi);
		}
		else if (c.imagi < 0)
		{
			if (c.imagi == -1)
				printf("%.0f - i\n", c.real);
			else
				printf("%.0f - %.0f*-1i\n", c.real, c.imagi);
		}
		else
		{
			printf("%.0f\n", c.real);
		}
	}
}
