#include "main.h"

/**
 *_strncpy - Copies a string from source to destination
 *@dest: Destination string
 *@src: Source string
 *@n:Maximum number of characters to be copied
 *Return: Pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
int g = 0;
int f = 0;

dest[g];
while (n > 0)
{
dest[g] = src[f];
++g;
++f;
--n;
}
return (dest);
}
