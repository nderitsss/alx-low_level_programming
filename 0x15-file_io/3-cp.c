#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * main -  copies content of a file
 * @argc:counts num of arguments
 * @argv : arguments
 *
 * Return: int value
 */
int main(int argc, char *argv[])
{
	int fo;
	int f2, fc2;
	int fc;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		return (97);
	}
	fo = open(argv[1], O_RDWR);
	f2 = open(argv[2], O_CREAT | O_RDWR, 664);
	if (fo == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n",argv[1]);
		return (98);
	}
	return (1);

	fc = close(fo);
	fc2 = close(f2);
	if (fc == -1 || fc2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n",fc);
		return (100);
	}
}
