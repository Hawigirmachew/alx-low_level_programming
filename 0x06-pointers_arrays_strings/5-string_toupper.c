#include "main.h"
/**
 * string_toupper - changes letter to uppercase
 * @s: pointer points to char
 * Return : array of char
 */
char *string_toupper(char *s)
{
while (*s != '\0')
{
if (*s >= 97 && *s <= 122)
{
*s = *s - 32;
}
s++;
}
return (s);
}
