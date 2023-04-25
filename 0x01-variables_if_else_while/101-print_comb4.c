#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints all different combos of 3 digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, n3;

	for (n1 = 48; n1 < 56; n1++)
	{
	for (n2 = n1 + 1; n2 < 57; n2++)
	{
	for (n3 = n2 + 1; n3 <= 57; n3++)
	{
	if (n1 != n2 && n1 != n3 && n2 != n3)
	{
	putchar(n1);
	putchar(n2);
	putchar(n3);
	if (n1 == 55 && n2 == 56)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
