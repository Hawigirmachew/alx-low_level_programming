#include "main.h"
/**
 * _strcpy - copy one string to the other string
 * @dest: pointer that points to array of char
 * @src: pointer points to array of char
 * Return: a char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
