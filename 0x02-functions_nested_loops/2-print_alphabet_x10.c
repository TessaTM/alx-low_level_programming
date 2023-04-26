#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10x
 * then newline
 */
void print_alphabet_x10(void)
{
	int times;
	char lower;

	for (times = 0; times <= 9; times++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
			_putchar(lower);
		_putchar('\n');
	}
}
