#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

int _strlen(char *s);

/**
 * create_file - Creates a file
 * @filename: Name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fdesc, len;
	ssize_t numByte;

	len = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	fdesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fdesc == -1)
		return (-1);

	if (text_content != NULL)
	{
		numByte = write(fdesc, text_content, len);
		if (numByte == -1)
			return (-1);
	}

	close(fdesc);
	return (1);
}

/**
 * _strlen - Calculates the length of a string
 * @s: String
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int xLength;

	xLength = 0;
	while (s[xLength] != '\0')
	{
		xLength++;
	}

	return (xLength);
}
