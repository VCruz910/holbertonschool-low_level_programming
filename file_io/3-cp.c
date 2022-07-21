#include "main.h"
/**
 * Error_File - Verifies if the files can be opened by main.
 * @file_from: File we want to copy.
 * @file_to: Where we want to copy a file to.
 * @argv: Argument Vector.
 **/
void Error_File(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - Copies a file's content to another file.
 * @argc: Number of arguments.
 * @argv: Argument vector.
 * Return: 0 (Success)
 **/
int main(int argc, char *argv[])
{
	int file_from, file_to, Err_Close;
	ssize_t NChars, NWR;
	char Buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	Error_File(file_from, file_to, argv);

	NChars = 1024;
	while (NChars == 1024)
	{
		NChars = read(file_from, Buff, 1024);
		if (NChars == -1)
			Error_File(-1, 0, argv);
		NWR = write(file_to, Buff, NChars);
		if (NWR == -1)
			Error_File(0, -1, argv);
	}

	Err_Close = close(file_from);
	if (Err_Close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	Err_Close = close(file_to);
	if (Err_Close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}

