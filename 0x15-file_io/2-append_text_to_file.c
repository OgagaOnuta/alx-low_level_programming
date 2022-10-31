#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

int _strlen(char *s);

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdesc, len;
	ssize_t numByte;

	if (filename == NULL)
		return (-1);

	fdesc = open(filename, O_WRONLY | O_APPEND);
	if (fdesc == -1)
		return (-1);

	if (text_content)
	{
		len = _strlen(text_content);
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
