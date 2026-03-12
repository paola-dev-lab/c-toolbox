#include <stdlib.h>
#include "csv.h"

char *csv_get_field(char *line, char sep, int field_index)
{
    int flen;
    int start;
  
    if (line == NULL || field_index < 0)
        return NULL;
    flen = field_len(line, sep, field_index);
    start = find_start(line, sep, field_index);
    if (flen < 0 || start < 0)
        return NULL;
    return (my_subs(line, start, flen));
}

/*#include <stdio.h>
int main(void)
{
    char line[] = "paris, bogota, rennes";
    char *field;
    
    field = csv_get_field(line,',', 1);
    if (!field)
        return (1);
    printf("%s\n", field);
    free(field); 
    return (0);
}*/
   
  


    
    
    
