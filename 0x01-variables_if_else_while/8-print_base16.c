#include <stdio.h>
/**
 * main - print base 16 lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	char lower;

	for (number = 0; number <= 10; number++)
	{
		putchar((number % 10) + '0');
	}
	for (lower = 'a'; lower <= 'f'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
