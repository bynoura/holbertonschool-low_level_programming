#include <unistd.h>

/**
 * print_number - prints an integer using write
 * @n: the integer to print
 */
void print_number(int n)
{
    char c;

    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }

    if (n / 10)
        print_number(n / 10);

    c = (n % 10) + '0';
    write(1, &c, 1);
}
