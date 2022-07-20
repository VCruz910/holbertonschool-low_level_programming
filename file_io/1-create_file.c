#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: Character for filename.
 * @text_content: File's content.
 * Return: 1 (Success), -1 (Failure)
 **/
int create_file(const char *filename, char *text_content)
{
	int FDesc, NLetters = 0, RWR;

	FDesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	RWR = write(FDesc, text_content, NLetters);

	if (!filename && FDesc == -1 && RWR == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}

	for (; text_content[NLetters]; NLetters++)
	{
		;
	}
	RWR = write(FDesc, text_content, NLetters);
	close(FDesc);
	return (1);
}
