#include "main.h"

/**
 * print_number - print the integer 
 * @n: the integer to be printed 
 */
void print_nunber(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
