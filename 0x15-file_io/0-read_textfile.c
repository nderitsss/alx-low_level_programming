#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * read_textfile - reads txt files
 * @filename : the file name
 * @letters: num of letters
 *
 * Return:an size_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo = open(filename, O_RDONLY);
	ssize_t p;
	char c[1024];

	p = read(fo, c, letters);
	if (filename == NULL || fo == -1)
	{
		return (0);
	}

	close(fo);
	return (p);
}
