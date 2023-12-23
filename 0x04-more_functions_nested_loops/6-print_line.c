#include "main.h"

/**
 * print_line - Draw a straight line of underscores in the terminal
 * @n: Number of times the character '_' should be printed
 * Return: No return value
 */
void print_line(int n)

{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
