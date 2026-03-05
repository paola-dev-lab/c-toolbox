#include <stdlib.h>
#include <stdio.h>
int my_strlenght(char *s)
{
    int i;
    i = 0;
    if (s == NULL)
        return(0);
    while (s[i] != '\0')
        i++;
    return (i);
}
char *my_strdup(char *src)
{
    int i;
    char *new;
    int len;

    if (src == NULL)
        return NULL;

    len = my_strlenght(src);
    new = malloc((sizeof (char)) * (len + 1));
    if (!new)
        return NULL;
    i = 0;
    while(src[i] != '\0')
    {    
    new[i] = src[i];
    i++;
    }
    new[i] = '\0';
    return (new);
}

int main(void)
{
    char s[] = "hola";
    char *copy = my_strdup(s);
    if (copy == NULL)
        return (1);
    printf("original: %s\n", s);
    printf("copy: %s\n", copy);
    free(copy);
    return (0);
}