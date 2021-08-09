#include "main.h"

/**
 *read_textfile - function to read a text file
 *@filename: name of file to read
 *@letters: number of letters it should read and print
 *Return: actual number of letters it read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, s, t;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDWR);

	if (fd < 0)
	{
		buf = malloc(sizeof(char) * letters);
		if (buf == NULL)
			return (0);

		s = read(fd, buf, letters);
		if (s < 0)
		{
			free(buf);
			return (0);
		}
		buf[s] = '\0';

		t = write(STDOUT_FILENO, buf, s);
		if (t < 0)
		{
			free(buf);
			return (0);
		}

		free(buf);
		close(fd);
		return (t);
	}

	return (0);
}
