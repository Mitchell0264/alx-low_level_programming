#include <unistd.h>
/**
 * main - A program that prints _putchar, followed by a new line.
 * Return: 0 (success).
 */
int main(void)
{
	write(1, "_putchar\n", 9);
	return 0;
}
