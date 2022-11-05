#include "main.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFSIZE 1024

ssize_t copy_to_file(const char *filefrom, const char *fileto);

/**
 * main - Executes file copy
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_to_file(av[1], av[2]);

	return (0);
}

/**
 * copy_to_file - Copies the content of a file to another file
 * @filefrom: File to copy from
 * @fileto: File to copy to
 *
 * Return: Number of bytes copied
 */

ssize_t copy_to_file(const char *filefrom, const char *fileto)
{
	int fdesc, numClose;
	ssize_t numRead, numWrite;
	char buffer[BUFFSIZE];

	if (filefrom == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filefrom);
		exit(98);
	}

	fdesc = open(filefrom, O_RDONLY);
	numRead = read(fdesc, buffer, BUFFSIZE);
	if (fdesc == -1 || numRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filefrom);
		exit(98);
	}

	numClose = close(fdesc);
	if (numClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fdesc);
		exit(100);
	}

	fdesc = open(fileto, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdesc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileto);
		exit(99);
	}

	numWrite = write(fdesc, buffer, numRead);
	if (numWrite == -1 || numWrite != numRead)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileto);
		exit(99);
	}

	numClose = close(fdesc);
	if (numClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fdesc);
		exit(100);
	}

	return (numRead);
}
