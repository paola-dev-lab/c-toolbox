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

int find_start(char *line, char sep, int field_index)
{
     int start;
     int i;
     int f;

     i = 0;
     f = 0;
     start = -1;
     if (field_index == 0)
        start = 0;
    else 
    {
        while (line[i])
        {
            if(line[i] == sep)
                f++;
            if (f == field_index)
            {
                start = i + 1;
                    break;
            }
        i++;
        }
    }
    return (start);
}

char *my_subs *str, int start, int len)
{
   
     char *newf;
     int i;
     *newf = malloc(sizeof(char) + (len + 1));
        if (!newf)
            return NULL;
        i = 0;
        while(
}


char *csv_get_field(const char *line, char sep, int field_index)
{
    int i;
    int f;
    int flen;
   
    if (line == NULL || field_index < 0)
        return (-1);
    flen = field_len(line, sep, field_index);
   
  


    
    
    
