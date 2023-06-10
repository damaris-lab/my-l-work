#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguements in the program
 * @argc : counts all arguements
 * *@argv :pointer to the raguement
 *Return:Always 0
 */
int main(int argc, char **argv)
{

	while (argc--)
	{
	printf("%s\n", *argv);
	argv++;

	}
	return(0)
}

