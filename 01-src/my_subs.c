#include <stdlib.h>

char *my_subs (char *line, int start, int len)
{
   
     char *newf;
     int i;

    if (line == NULL || start < 0 || len < 0)
    return NULL;
    newf = malloc(len + 1);
        if (!newf)
            return NULL;
    i = 0;
    while(i < len)
        newf[i++] = line[start++];
    newf[i] = '\0';
    return (newf);
}
