#include <stdlib.h>
#include <stdio.h>

int lenstr(const char* s)
{
    int i;

    i = 0;

    while(s[i] != '\0')
        i++;
    return (i);
}

char *my_substr(const char *s, int start, int len)
{
    int i;
    int j;
    int slen;
    char *copy;

    if (s == NULL || start < 0 || len < 0)
        return NULL;
     slen = lenstr(s);
    if (start >= slen)
    {
        copy = malloc(1);
            if (!copy)
                return NULL;
            copy[0] = '\0';
            return copy;
    }
    if ((start + len) > slen)
        len = slen - start;
    copy = malloc((sizeof(char)) * (len + 1));
    if (!copy)
        return NULL;
    i = start;
    j = 0;
    while (j < len)
        {
            copy[j] = s[i];
            i++;
            j++;
        }
    copy[j] = '\0';
    return (copy);
}

int main(void)
{
    const char *str = "ositopaola";
    char *sub;

    sub = my_substr(str, 5, 5);
        if (!sub)
            return 1;
    printf("chaine original :%s\n", str);
    printf("chaîne decoupée : %s\n", sub);
    free(sub);
    return (0);
}