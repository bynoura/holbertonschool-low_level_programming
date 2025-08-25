#include "main.h"
#include <unistd.h>

/**
 * print_number - prints an integer using write
 * @n: the number to print
 */
void print_number(int n)
{
	char c;

	if (n < 0)
	{
		write(1, "-", 1);
		if (n <= -10)
			print_number(-(n / 10));
		c = '0' + -(n % 10);
		write(1, &c, 1);
	}
	else
	{
		if (n >= 10)
			print_number(n / 10);
		c = '0' + (n % 10);
		write(1, &c, 1);
	}
}
