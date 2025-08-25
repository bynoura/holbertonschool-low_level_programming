#include "main.h"
#include <unistd.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 *
 * Description: Numbers printed using write, separated by ", ",
 * ending with 98 and a newline.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			print_number(n);
			write(1, ", ", 2);
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			print_number(n);
			write(1, ", ", 2);
			n--;
		}
	}
	print_number(98);
	write(1, "\n", 1);
}
