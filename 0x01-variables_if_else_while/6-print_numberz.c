#include <stdio.h>

/**
 * main - prints single digit number of base 10
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9' ; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
