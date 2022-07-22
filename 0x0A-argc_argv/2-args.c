#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: arguments
 * @argv: Array pointing to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a = 0;

	while (a < argc)
	{
		printf("%s\n", argv[a]);
		a++;
	}
	return (0);
}
