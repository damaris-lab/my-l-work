#include "main.h"
/**
 *create_file - creates a file
*@filename: name of file
*@text_content: string to write to the file
*Return: 1 on success 0 if fail
*/
int create_file(const char *filename, char *text_content)
{
	int file, len = 0;

	ssize_t res_write;


	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	res_write = write(file, text_content, len);

	if (file == -1 || res_write == -1)
		return (-1);

	close(file);
	return (1);
}
