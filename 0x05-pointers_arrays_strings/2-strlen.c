#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @str: The string to get the length of
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
