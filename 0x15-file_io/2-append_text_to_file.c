#include "main.h"
/**
 *append_text_to_file - append text to file
*@filename: name of file
*@text_content: string to add at the end of file
*Return: i on success -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, count = 0;

	ssize_t res_write;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	res_write = write(file, text_content, count);

	if (file == -1 || res_write == -1)
		return (-1);

	close(file);

	return (1);
}




