#include <stdio.h>
#include "main.h"

/**
 * main - prints all the arguement in the program
 * @argc:count all the arguements
 * @argv:pointer to arguement
 * Return:always 0
 */
int main(int argc, char *argv[])
{
	 (void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}


