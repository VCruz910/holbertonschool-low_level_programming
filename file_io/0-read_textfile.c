#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Variable for file.
 * @letters: Variable for the letters.
 * Return: WR.
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int FDesc, RD, WR;
	char *Buff;

	if (!filename)
	{
		return (0);
	}

	FDesc = open(filename, O_RDONLY);
	Buff = malloc(sizeof(char) * letters);
	RD = read(FDesc, Buff, letters);
	WR = write(STDOUT_FILENO, Buff, RD);

	if (FDesc < 0 && !Buff)
	{
		return (0);
	}
	if (RD < 0)
	{
		free(Buff);
		return (0);
	}
	close(FDesc);

	if (WR < 0)
	{
		free(Buff);
		return (0);
	}
	free(Buff);
	return (WR);
}
