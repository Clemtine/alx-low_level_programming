#include "main.h"
#include <string.h>

/**
 * _strlen - My learning fonction
 *
 * @s: char to check
 * Return: 1
 */
int _strlen(char *s)
{
	int var = 0;

	for (; *s++;)
		var++;
	return (var);
}
