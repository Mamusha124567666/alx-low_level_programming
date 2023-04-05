#include "main.h"
/**
 * _strlen_recursion - Main Entry
 * @g: input
 * Return: 0
 */
int _strlen_recursion(char *g)
{
	if (*g != '\0')
	{
		return (1 + _strlen_recursion(g + 1));
	}
	return (0);
}
