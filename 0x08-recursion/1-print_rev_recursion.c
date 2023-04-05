#include "main.h"
/**
 * _print_rev_recursion - Main Entry
 * @g: input
 */
void _print_rev_recursion(char *g)
{
	if (*g != '\0')
	{
		_print_rev_recursion(g + 1);
		_putchar(*g);
	}
}
