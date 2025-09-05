#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to the string
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0, j;
	char sep[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		/* إذا كان أول حرف أو بعد separator */
		if (i == 0 || (strchr(sep, str[i - 1]) != NULL))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}

	return (str);
}
