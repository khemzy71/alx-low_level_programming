#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = 0;
	int len2 = 0;
	int y = 0;
	int w = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + y))
		len1++, y++;
	while (*(s2 + w))
		len2++, w++;
	len2++;

	concat = malloc(sizeof(char) * (len1 + len2));

	if (concat == NULL)
		return (NULL);

	y = 0, w = 0;
	while (y < len1)
	{
		*(concat + y) = *(s1 + y);
		y++;
	}
	while (w < len2)
	{
		*(concat + y) = *(s2 + w);
		y++, w++;
	}

	return (concat);
}
