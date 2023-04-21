#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints single digit numbers base ten
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}
	printf("\n");
	return (0);
}
