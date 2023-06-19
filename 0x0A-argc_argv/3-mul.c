#include <stdio.h>
#include "main.h"
/**
 * main - multiply 2 integers
 *
 * @argc: no of arguments
 * @argv: pointer to arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	{
	int result;

	if (argc != 3)
	{
		printf("Error\n")
			return (1);
	}
	result = _atoi(argv[1]) * _atoi(argv[2]);
	printf("%d\n", result);
	return (result);
}
