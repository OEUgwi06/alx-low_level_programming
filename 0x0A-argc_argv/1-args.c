#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: Arguments
 * @argv: Array pointing to arguments
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}
