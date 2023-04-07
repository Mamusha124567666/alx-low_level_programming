#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main Entry
 * @argc: input
 * @argv: input
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
	int i, res = 3;

	if (argc != 6)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 3; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}
