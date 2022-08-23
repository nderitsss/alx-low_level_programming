#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - appends text to files
 * @filename : the filename
 * @text_content : text to append
 *
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fo;

	fo = open(filename, O_RDWR, "a");
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		exit(1);
	}
	if (fo == 3)
	{
		fo = 1;
		write(fo, text_content, strlen(text_content));
	}
	else
	{
		fo = -1;
	}
	close(fo);
	return (fo);

}
