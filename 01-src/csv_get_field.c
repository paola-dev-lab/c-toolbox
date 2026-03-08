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
     int i;
     int f;

     if (line == NULL || field_index < 0)
        return (-1);
     i = 0;
     f = 0;
    if (field_index == 0)
        return (field_index);
    else 
    {
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
    }
    return (-1);
}

char *my_subs (char *line, int start, int len)
{
   
     char *newf;
     int i;

    if (line == NULL || start < 0 || len < 0)
    return NULL;
   
    newf = malloc(sizeof(char) * (len + 1));
        if (!newf)
            return NULL;
    i = 0;
    while(i < len)
        {
            newf[i] = line[start];
            i++;
            start++;
        }
    newf[i] = '\0';
    return (newf);
}


char *csv_get_field(const char *line, char sep, int field_index)
{
    int i;
    int f;
    int flen;
    int start;
  
    
   
    if (line == NULL || field_index < 0)
        return (-1);
    flen = field_len(line, sep, field_index);
    start = find_start(line, sep, field_index);
    my_subs(line, start, flen);
}
   
  


    
    
    
