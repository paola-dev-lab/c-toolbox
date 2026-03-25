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
    write(1, buffer, bytes_read);
    buffer[bytes_read] = '\0';
    int	index;
    index = detect_line(buffer);
    	if(index >= 0)
		write(1, buffer, index + 1);
	char *line = my_subs(buffer, 0, index);
	char *field = csv_get_field(line, ',', col);
	if (field == NULL)
		return (-1);
	int	i;
	i = 0;
	while(field[i] != '\0')
		i++;
	write(1, field, i);
	write(1, '\n', 1);	

}
