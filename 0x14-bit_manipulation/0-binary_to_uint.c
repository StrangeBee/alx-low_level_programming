#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int.
 * @b: points to a string of 0 and 1 chars
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int bin_val = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		bin_val = 2 * bin_val + (b[j] - '0');
	}

	return (bin_val);
}
