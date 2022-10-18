#include <stdio.h>

/**
 * main - Entry point
 * autor: Steve
 * Return: Always 0 (Success)
 */
int main(void)
{
	int Steve;

	for (Steve = 48; Steve < 58; Steve++)
	{
		putchar(Steve);
		if (Steve != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
