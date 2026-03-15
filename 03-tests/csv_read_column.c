#include <stdio.h>
#include <stdlib.h>

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

    FILE *file;
    file = fopen(argv[1], "r");
    if (file == NULL)
    {
        printf("Erreur ouverture fichier\n");
        return (1);
    }
    printf("fichier ouvert avec succès\n");
}