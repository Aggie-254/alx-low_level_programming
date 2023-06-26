#include "main.h"

/**
 *rev_string - Print string in reverse
 *@s: String
 *Return: Nothing
 */
void rev_string(char *s)
{
	int a = 0, b = 0, Aux;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;

	while (a > b)
	{
		Aux = s[a];
		s[a--] = s[b];
		s[b++] = Aux;
	}
}
