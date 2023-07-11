#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - Creates an array of chars and initialize it to
 *a spefic char
 *@size: size of array.
 *@c:character to create array for.
 *Return: returns NULL if size = 0 or pointer to the array if malloc fails.
 */

char *create_array(unsigned int size, char c);
{
unsigned int i;
char *arr = (char *)malloc(size * sizeof(char));

if (arr == NULL)
{
return (NULL);
}

if (size == 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return  (arr);
}
