#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Find the largest prime factor of a number
 * @n: The number to find the largest prime factor for
 * Return: The largest prime factor
 */
long largest_prime_factor(long n)
{
	long factor;

	while (n % 2 == 0)
	{
		factor = 2;
		n /= 2;
	}

	for (factor = 3; factor <= sqrt(n); factor += 2)
	{
		while (n % factor == 0)
		{
			n /= factor;
		}
	}
	if (n > 2)
	{
		factor = n;
	}
	return (factor);
}

/**
 * main - Entry point of the program
 * Return: Always 0 (success)
 */

int main(void)
{
	long number = 612852475143;
	long result = largest_prime_factor(number);

	printf("%ld\n", result);

	return (0);
}
