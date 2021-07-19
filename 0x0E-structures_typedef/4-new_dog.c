#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a ptr to a newly allocated space in mem
 * @str: string
 * Return: ptr to newly allocated space in mem
 */

char *_strdup(char *str)
{
int length, i;
char *arr;

if (str == NULL)
{
return (NULL);
}
length = 0;
while (*(str + length) != '\0')
{
length++;
}

arr = (char *) malloc(length *sizeof(char) + 1);
if (arr == NULL)
return (NULL);

for (i = 0; i < length; i++)
{
arr[i] = str[i];
}
arr[i] = '\0';

return (arr);
}

/**
 * new_dog - creates a 'new' dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: new_dog (dog_t)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggie;
char *doggie_name, *doggie_owner;

doggie = malloc(sizeof(dog_t));
if (doggie == NULL)
return (NULL);

doggie_name = _strdup(name);
if (doggie_name == NULL)
{
free(doggie);
return (NULL);
}

doggie_owner = _strdup(owner);
if (doggie_owner == NULL)
{
free(doggie_name);
free(doggie);
return (NULL);
}
doggie->name = doggie_name;
doggie->age = age;
doggie->owner = doggie_owner;
return (doggie);
}
