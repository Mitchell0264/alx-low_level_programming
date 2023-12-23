#include "main.h"

/**
 * print_triangle - Print a right-angled triangle of '#' characters
 * @size: Size of the triangle
 * Return: No return value
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
