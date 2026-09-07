#include "mylib.h"
#include <stddef.h>

int cstrlen(char *str)
{
    int len = 0;

    while (*str != '\0')
    {
        len++;
        str++;
    }

    return len;
}

char *cstrcpy(char *dest, char *src)
{
    char *p = dest;

    while (*src != '\0')
    {
        *p = *src;
        p++;
        src++;
    }

    *p = '\0';

    return p;
}

char *cstrcat(char *dest, char *src)
{
    char *p = dest;

    while (*p != '\0')
    {
        p++;
    }

    while (*src != '\0')
    {
        *p = *src;
        p++;
        src++;
    }

    *p = '\0';

    return dest;
}

char *cstrchr(char *str, int c)
{
    while (*str != '\0')
    {
        if (*str == c)
        {
            return str;
        }

        str++;
    }

    if (c == '\0')
    {
        return str;
    }

    return NULL;
}

int cstrcmp(char *s1, char *s2)
{
    while (*s1 != '\0' && *s2 != '\0')
    {
        if (*s1 != *s2)
        {
            return (unsigned char)*s1 - (unsigned char)*s2;
        }

        s1++;
        s2++;
    }

    return (unsigned char)*s1 - (unsigned char)*s2;
}