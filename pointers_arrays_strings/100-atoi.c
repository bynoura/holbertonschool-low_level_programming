#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: integer value of the string
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int result = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		/* عد الإشارات */
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			; /* نتجاهل */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (started)
		{
			/* إذا بدأنا نقرأ أرقام وبعدين وقفنا */
			break;
		}
		i++;
	}

	return (sign * (int)result);
}
