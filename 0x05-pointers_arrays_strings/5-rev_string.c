#include "main.h"
#include <stdio.h>
/**
* print_rev - prints a string in reverse, followed by a new line
* @s: string to be printed
*/
void rev_string(char *s)
{
	char buff[500];
	int i = 0, j, pos = 0;

	while (*(s + i) != '\0')
	{
	buff[i] = *(s + i);
	i++;
	}
	for (j = (i - 1); j >= 0; j--)
	{
	*(s + pos) = buff[j];
	pos++;
	}
}
