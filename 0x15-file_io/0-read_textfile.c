#include "holberton.h"
/**
 *read_textfile - Function that reads a text file and prints it to POSIX stdout
 *
 * @filename: Name of the file passed
 * @letters: size of letters to be passed
 *
 * Return: Returns the
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wrt;
	char *pLetters = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}

	if (pLetters == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	rd = read(fd, pLetters, letters);
	if (rd == -1)
		return (0);

	wrt = write(STDOUT_FILENO, pLetters, rd);
	if (wrt == -1)
		return (0);
	close(fd);
	free(pLetters);
	return (rd);
}
