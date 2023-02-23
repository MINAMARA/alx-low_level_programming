#include <stdio.h>

/**
 * main - 101-natural.c
 * Description - 101-natural.c
 * Return: Always (success)
 */

int main(void)

{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}
		printf("%d\n", z);

		return (0);
	}
}
