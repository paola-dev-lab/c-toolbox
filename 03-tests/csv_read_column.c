#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "csv.h"

int main(int    argc, char **argv)
{
    if (argc != 3)
    {
        printf("Usage: %s fichier.csv colonne", argv[0]);
        return (1);
    }
int col = atoi(argv[2]);
    if(col < 0)
    {
        printf("Colonne invalide\n");
        return (1);
    }
    int fd;
    fd = open(argv[1], O_RDONLY);
    if (fd < 0)
    {
        write(2, "erreur d'ouverture de fichier\n", 26);
		return (1);
    }
    char    buffer[1000];
    int bytes_read;
    bytes_read = read(fd, buffer, 999);
    if (bytes_read < 0)
    {
        write(2, "erreur lecture\n", 16);
        return (1);
    }
    buffer[bytes_read] = '\0';
    int	index;
	char *line;
	char *field;
	int i;
	int start;
	start = 0;
	while (buffer[start] != '\0')
	{
	index = detect_line(buffer + start);
	if (index < 0)
		break;
	line = my_subs(buffer, start, index);
	field = csv_get_field(line, ',', col);
	if (field == NULL)
		{
			free (line);
			return (1);
		}
	i = my_strlen(field);
	write(1, field, i);
	write(1, "\n", 1);

	free(field);
	free(line);
	start = start + index + 1;
	}
	
}
