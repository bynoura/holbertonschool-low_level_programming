#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: integer value of the string
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, started = 0;
	int res = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';

			if (res > (INT_MAX - digit) / 10)
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
			res = res * 10 + digit;
			started = 1;
		}
		else if (started)
			break;
		i++;
	}

	return (res * sign);
}
