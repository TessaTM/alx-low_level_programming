#include"main.h"
#include<unistd.h>
/**
 * _putchar - prints 'c'
 * Return: 1 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
