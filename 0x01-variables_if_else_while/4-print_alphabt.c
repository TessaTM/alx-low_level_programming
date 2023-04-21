#include <stdio.h>
#include <stdlib.h>
/**
 * main - print lowercase alphabet except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != 'e' && lower != 'q')
			putchar(lower);
	}
	putchar('\n');
	return (0);
}
