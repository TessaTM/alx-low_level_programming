#include "main.h"
/**
 * __islower - checks for lowercase character
 * @c: character
 * Return: if lowercase, 1, if no lowercase, 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
