#include "main.h"

/**
 * print_numbers - print the number since 0 up to 9
 * Return: The number since 0 up to 9
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
	putchar(x + '0');
	}
	_putchar('\n');
}
