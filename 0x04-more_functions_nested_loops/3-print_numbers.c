#include "main.h"
/**
* print_numbers - prints numbers from 0 to 9
* _putchar represents putchar
* Return: Always 0
*/
void print_numbers(void)
{
	int n;

	for (n = 0; n < 10)
	{
	_putchar(n);
	n++;
	}
	_putchar('\n');
}
