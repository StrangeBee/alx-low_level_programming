#include "main.h"

/**
 * _abs - Computes the absolut value
 * of am integer.
 *
 * @i: input number as an integer.
 *
 * Return: absolue value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
