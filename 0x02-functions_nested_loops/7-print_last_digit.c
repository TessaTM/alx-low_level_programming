#include "main.h"
/**
 * print_last_digit - print last digit
 * @num: full number
 * Return: The last digit's value
 */
int print_last_digit(int num)
{
	int last = num % 10;

	if (last < 0)
	{
		last *= -1;
	}
	_putchar('0' + last);
	return (0);
}

