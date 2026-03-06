#include <stdlib.h>
int field_len(char *line, char sep, int field_index)
{
    
    int i;
    int fl;
    int f;
    if (line == NULL || field_index < 0)
        return (-1);
    i = 0;
    f = 0;
    fl = 0;
    while (line[i])
    {
        if (line[i] == sep)
        {
            if (f == field_index)
                return (fl);
            f++;
        }
        else if (f == field_index)
            fl++;
        i++;
    }
    if (f == field_index)
        return (fl);
    return (-1);
}

char *csv_get_field(const char *line, char sep, int field_index)
{
    int i;
    int flen;
    if (line == NULL || field_index < 0)
        return (-1);
    
    
    
