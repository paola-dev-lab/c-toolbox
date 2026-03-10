#include <stdlib.h>

int find_start(char *line, char sep, int field_index)
{
     int i;
     int f;

     if (line == NULL || field_index < 0)
        return (-1);
     i = 0;
     f = 0;
    if (field_index == 0)
        return (0);
    while (line[i])
        {
            if(line[i] == sep)
                f++;
            if (f == field_index)
            {
                return (i + 1);
            }
        i++;
        }
    return (-1);
}
