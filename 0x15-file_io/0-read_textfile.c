#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints to posix
 *@filename: name of the file
*@letters: number of letters it could write abnd print
*Return: letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	size_t w;
	size_t l;
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	l = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, l);

	free(buff);
	close(fd);
	return (w);
}




