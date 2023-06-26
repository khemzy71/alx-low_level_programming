#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
        int len = 0;

        while (*s != '\0')
        {
                len++;
                s++;
        }

        return (len);
}

/**
 * rev_string -  reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{

        int x = 0;
        int y = (_strlen(s) - 1);
        char rev;

        while (x < y)
        {
                rev = s[x];
                s[x] = s[y];
                s[y] = rev;
                x++, y--;
        }
}
