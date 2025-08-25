#include "main.h"

/**
 * main - test add function and print using write
 *
 * Return: Always 0
 */
int main(void)
{
    print_number(add(89, 9));
    write(1, "\n", 1);

    print_number(add(0, 9));
    write(1, "\n", 1);

    print_number(add(0, 0));
    write(1, "\n", 1);

    print_number(add(89, 0));
    write(1, "\n", 1);

    print_number(add(-89, 12));
    write(1, "\n", 1);

    print_number(add(12, 12));
    write(1, "\n", 1);

    print_number(add(-89, -98));
    write(1, "\n", 1);

    return (0);
}
