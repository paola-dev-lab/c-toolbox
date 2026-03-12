#include <stdio.h>
#include <stdlib.h>
#include "csv.h"

int main(void)
{   
    char line[] = "Paris, Bogota, New York";
    char *field;

    field = csv_get_field(line, ',', 1);
    if (!field)
        return (1);
    printf("%s\n", field);

    free(field);
    return (0);
}