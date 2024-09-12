#include <stdio.h>

int main() {
    int jourN, moisN, anneeN;
    int jour, mois, annee;
    int age;

    printf("Entrez la date de naissance de l'habitant (jj/mm/aaaa) : ");
    scanf("%d/%d/%d", &jourN, &moisN, &anneeN);

    printf("Entrez la date du jour (jj/mm/aaaa) : ");
    scanf("%d/%d/%d", &jour, &mois, &annee);

    age = annee - anneeN;
    if (mois < moisN || (mois == moisN && jour < jourN))
    {
        age--;
    }

    if (age < 18)
    {
        printf("L'habitant beneficie d'une reduction.\n");
    } 
    else if (age > 60)
    {
        printf("L'habitant beneficie d'une reduction.\n");
    }
    else {
        printf("L'habitant ne beneficie pas d'une reduction.\n");
    }

    return 0;
}