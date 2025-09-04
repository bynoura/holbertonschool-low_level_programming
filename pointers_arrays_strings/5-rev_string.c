#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	/* احسب طول النص */
	while (s[j] != '\0')
	{
		j++;
	}

	/* اعكس النص (swap من الطرفين) */
	j = j - 1;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
