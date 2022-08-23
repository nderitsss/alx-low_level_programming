#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * create_file - creates a file
 * @filename: the file name
 * @text_content: file content
 *
 * Return: value of fo
 */
int create_file(const char *filename, char *text_content)
{
	int fo;

	fo = open(filename, O_CREAT, 600);

	write(fo, text_content, strlen(text_content));
	if (filename == NULL)
	{
		return (-1);
	}

	close(fo);
	return (1);

}
