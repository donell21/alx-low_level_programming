#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 * an inputted number of bites from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bites from src to be appended to dest
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)

{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';	
	return (dest);
}
