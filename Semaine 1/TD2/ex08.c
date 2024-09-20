// Écrire un algorithme puis un programme C permettant de déterminer l’élément le plus grand
// d’une série de nombres introduits au fur et à mesure au clavier et dont le dernier est 0 


/*
si c'est le premier nombre, alors le plus grand nombre est le premier nombre
Sinon si le nombre est plus grand que le plus grand nombre, alors le plus grand nombre est le nombre
*/

#include <stdio.h>

int main() {
    int nb;
    printf("Entrer un nombre: ");
    scanf("%d", &nb);
    int max = nb;

    while (nb != 0){
        if (nb > max) {
            max = nb;
        }
        printf("Entrer un nombre: ");
        scanf("%d", &nb);
    }

    printf("Le plus grand nombre est %d\n", max);

    return 0;
}