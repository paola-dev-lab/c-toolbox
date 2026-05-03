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
    int	index;
	char *line;
	char *field;
	int i;
	int start;

	while((bytes_read = read(fd, buffer, 999) > 0)
	{
    	buffer[bytes_read] = '\0';
		start = 0;
		while (buffer[start] != '\0')
		{
    		if (bytes_read < 0)
			index = detect_line(buffer + start);
				break;
			line = my_subs(buffer, start, index);
			field = csv_get_field(line, ',', col);
			if (field == NULL)
			{
				free (line);
				clode(fd);
				return (1);
			}
			write(1, field, my strlen(field));
			write(1, "\n", 1);
			free(field);
			free(line);
			start = start + index + 1;
		}
	}

	if (bytes_read < 0)
	{
		write(2, "Erreur\n", 15);
		close(fd);
		return(1);	
	}
	close(fd);
	return(0);
}
