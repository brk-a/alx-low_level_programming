#include "holberton.h"
#include <string.h>

/**
*
*
*
*
*/

char *rot13(char *)

{
char* word = *[1];
int key = 13;

/* all the letters in the first argument */
for (int n = 0, len = strlen(word); n < len; n++)
{
int currentLetter = word[n];

char cipher = currentLetter + key;

/* make sure the next letter isn't over 26 or it isn't a ascii letter */
/* if it is, do %26 */
if ((currentLetter - 'a') + key > 26)
{
key = (currentLetter - 'a') + key) % 26;
cipher = 'a' + key;
}

/* reset the key and do the next letter */
key = 13;
}
}
return (cipher);
}
