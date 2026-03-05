# c-tools

Bibliothèque utilitaire en **C** dédiée à la manipulation de chaînes et au parsing de texte.

Ce projet regroupe des fonctions de base utilisées dans des outils systèmes et CLI manipulant des données textuelles (CSV, logs, fichiers structurés).  
Il sert notamment de fondation pour la construction d’outils comme **csvgrep**.

## Fonctions

- `my_strlen` — calcul de la longueur d’une chaîne
- `my_strdup` — duplication dynamique d’une chaîne
- `my_substr` — extraction sécurisée d’une sous-chaîne
- `find_char` — recherche d’un caractère dans une chaîne
- `csv_get_field` — extraction d’un champ dans une ligne CSV

## Exemple

```c
#include <stdio.h>
#include "ctools.h"

int main(void)
{
    char *champ = csv_get_field("Alice,30,Paris", ',', 1);
    printf("%s\n", champ); // 30
    free(champ);
}
```

## Structure du projet
```
c-tools
├── src
├── include
├── tests
├── Makefile
└── README.md
```

## Objectifs
- renforcer la maîtrise du **langage C**
- pratiquer la **gestion mémoire (malloc / free)**
- développer des **outils réutilisables pour le parsing de texte**
