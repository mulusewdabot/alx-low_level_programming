#include "main.h"
/**
 * _strlen - returns the length of a string
 * i stands for strlen
 * b stands for counting of strlen
 * @s: string
 * Return: length
 */
int _strlen(char *i)
{
	int b = 0;

	while (*i != '\0')
	{
		b++;
		i++;
	}

	return (b);
}
