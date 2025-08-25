#include "main.h"
#include <unistd.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
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
