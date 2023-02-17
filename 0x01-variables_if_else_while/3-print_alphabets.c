#include <stdio.h>

/**
 * main - Prints the alphabets in small then big letter
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphas[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alphas[i]);
	}
	putchar('\n');
	return (0);
}
