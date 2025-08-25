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

/**
 * print_to_98 - prints numbers from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		print_number(n);
		write(1, ", ", 2);
		if (n < 98)
			n++;
		else
			n--;
	}
	print_number(98);
	write(1, "\n", 1);
}
