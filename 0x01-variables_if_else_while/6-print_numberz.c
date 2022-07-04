#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0
 */
int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
		putchar((b % 10) + '0');

	putchar('\n');

	return (0);
}
