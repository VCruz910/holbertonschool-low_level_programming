#ifndef _DOG_H_
#define _DOG_H_

/*Libraries*/
#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*Struct */
/**
 * dog_t - Typedef for struct dog.
 **/
typedef struct dog dog_t;
/**
 * struct dog - Stores info of a dog.
 * @name: Character for dog's name.
 * @age: Float variable for dog's age.
 * @owner: Character for dog's owner.
 **/
struct dog
{
char *name;
float age;
char *owner;
};

/*Prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
