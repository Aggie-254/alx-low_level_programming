#include "main.h"

/**
 *_strcat - Concatenates two strings
 *@dest: The first string
 *@src: The second string
 *Return: Pointer to dest
 */

char *_strcat(char *dest, char *src)
{
int a = 0;
int b = 0;

while (dest[a] != '\0')
{
++a;
}
while (src[b] != '\0')
{
dest[a] = src[b];
++b;
++a;
}
dest[a] = '\0';
return (dest);
}
