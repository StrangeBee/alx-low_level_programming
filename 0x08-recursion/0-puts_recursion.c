#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string
 * Return: no return.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
<<<<<<< HEAD
		_puts_recursion(s + 1);
=======
		_puts_recursions(s + 1);
>>>>>>> 8da63c91b98ac2b6bae7cd35799fe95bfb4463f9
	}
	else
		_putchar('\n');
}
