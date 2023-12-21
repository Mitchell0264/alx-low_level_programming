#include <unistd.h>
/**
 * main - A program that print put char
 * Return: 1 (success)
 */
int _putchar(char c) 
{
	return(write(1, &c, 1));
}
