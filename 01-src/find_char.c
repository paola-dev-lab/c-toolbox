#include <stdlib.h>
#include <stdio.h>
int find_char(const char *s, char c)
{
    int i;
    
    if (s == NULL)
        return (-1);
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return (i);
        i++;
    }
    return (0);
}