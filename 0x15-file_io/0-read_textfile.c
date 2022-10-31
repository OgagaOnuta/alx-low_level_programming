#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout
 * @filename: Name of the file
 * @letters: Number of letters it should read and print
 *
 * Return: Actual number of letters it could read and print on success,
 * 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdesc;
	ssize_t numLettR, numLettW;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fdesc = open(filename, O_RDONLY);
	if (fdesc == -1)
		return (0);

	numLettR = read(fdesc, buffer, letters);
	if (numLettR == -1)
		return (0);

	close(fdesc);

	numLettW = write(STDOUT_FILENO, buffer, letters);
	if (numLettW == -1)
		return (0);

	free(buffer);
	return (numLettR);
}
