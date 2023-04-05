#include "main.h"
/**
 * _puts_recursion - Main Entry
 * @g: input
 */
void _puts_recursion(char *g)
{
	if (*(g) != '\0')
	{
		_putchar(*g);
		_puts_recursion(g + 1);
	}
	if (*(g) == '\0')
	{
		_putchar('\n');
	}
}
