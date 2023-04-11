#include "main.h"

/**
 * read_textfile - read text printout in POSIX
 *
 * @filename: named file to be read
 * @letters: letters to read
 *
 * Return: 0 incase of failure or file
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int new_file;
	ssize_t check, count;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (new_file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	check = read(file, buffer, letters);
	if (check == -1)
		return (0);

	count = write(STDOUT_FILENO, buffer, check);
	if (count == -1 || check != count)
		return (0);

	free(buffer);

	close(file);

	return (count);
}
