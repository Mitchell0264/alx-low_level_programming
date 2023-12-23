#include "main.h"
/**
 * _isdigit - Check if character is digit
 *  @x: The number to be checked
 *  Return: 1 for a digital check or 0 for any else
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
