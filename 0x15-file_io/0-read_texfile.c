#include "main.h"
#include "holberton.h"
/**
* read_textfile - Reads a file and prints it to stdout.
* @filename: name of the file that needs to be read.
* @letters: number of letters the fn should print.
* Return: The actual number of letters printed, 0 otherwise
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, i, read_letters;
char *buf;
if (filename == NULL)
return (0);
buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buf);
return (0);
}
read_letters = read(fd, buf, letters);
if (read_letters == -1)
{
close(fd);
free(buf);
return (0);
}
for (i = 0; i < read_letters; i++)
{
if (write(STDOUT_FILENO, &buf[i], 1) == -1)
{
close(fd);
free(buf);
return (0);
}
}
close(fd);
free(buf);
return (read_letters);
}
