#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *strtow - returns a ptr to an arr of strs
 *
 *@str: input str
 *
 *Return: ptr to arr of str, NULL otherwise
 */

char **strtow(char *str)
{
int len = 0, words_len = 0, spaces_len = 0, block_len;
char **words, **words_tmp, *buf, s, *str_tmp = str;
if (str == NULL || *str == '\0')
return (NULL);
for (; (s = str[len]); len++, spaces_len += s == ' ')
(words_len += (!len && str[0] != ' ') || (s == ' ' &&
(str[len + 1] != ' ' && str[len + 1])));
if (words_len == 0)
return (NULL);
block_len = (sizeof(char *) * (words_len + 1)) +
(sizeof(char) * (len + words_len - spaces_len));
words = malloc(block_len), words_tmp = words;
if (words == NULL)
return (NULL);
buf = (char *)(words + words_len + 1);
for (*words++ = buf; (s = *str); ++str)
{
if (s == ' ')
if (str[1] == ' ' || str == str_tmp || !str[1] || words[-1] == buf)
continue;
else
(*buf++ = '\0'), *words++ = buf;
else
*buf++ = s;
}
*buf = '\0', *words = NULL;
return (words_tmp);
}
