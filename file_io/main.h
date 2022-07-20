#ifndef _MAIN_H_
#define _MAIN_H_

/*Libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcnt1.h>

/*Structures*/


/*Prototypes*/
/*Misc.*/


/*Mandatory Tasks*/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/*Advanced Tasks*/


#endif
