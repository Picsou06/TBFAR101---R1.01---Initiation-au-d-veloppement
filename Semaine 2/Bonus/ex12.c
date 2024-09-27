#include <stdio.h>

int main() {
    int jourSemaine, heure;

    //printf("Entrez le numéro du jour de la semaine (1-7) : ");
    scanf("%d", &jourSemaine);

    //printf("Entrez l'heure (0-23) : ");
    scanf("%d", &heure);
    if (jourSemaine > 0 && jourSemaine < 8 && heure >= 0 && heure < 24)
    {
        if (jourSemaine == 1)
        {
            printf("Fermé");
        }
        else if (jourSemaine == 2 && (heure < 13 || heure > 19))
        {
            printf("Fermé");
        }
        else if (heure < 13 || heure > 19)
        {
            printf("Fermé");
        }
        else
        {
            printf("Ouvert");
        }
    }
    else
    {
        printf("Mauvaise saisie");
    }


    return 0;
}