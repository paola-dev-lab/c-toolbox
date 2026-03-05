#include <stdio.h>
int my_strlen(char *s)
{
    int i;

    if (s == NULL)
        return (0);
    
    i = 0;
    while (s[i] != '\0')
    i++;
    return (i);
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return (0);
    printf("%d\n", my_strlen(argv[1]));
    return (0);
}