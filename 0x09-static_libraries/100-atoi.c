#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	int i, d, n, size, f, count;

	i = 0;
	d = 0;
	n = 0;
	size = 0;
	f = 0;
	count = 0;

	while (s[size] != '\0')
		size++;

	while (i < size && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			count = s[i] - '0';
			if (d % 2)
				count = -count;
			n = n * 10 + count;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);

	return (n);
}
