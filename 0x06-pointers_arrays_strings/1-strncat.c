#include "main.h"

/**
 *_strncat - Concatenates two strings
 *@dest: Destination string
 *@src: source string
 *@n: Maximum number of bytes from source string
 *Return: Pointer to the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
int b = 0;
int a = 0;

while (dest[b] != '\0')
{
++b;
}
while (src[a] != '\0' && n > 0)
{
dest[b] = src[a];
++b;
++a;
--n;
}
return (dest);
}

