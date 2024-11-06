#include "TD9.h"

Girlande createGirlande(int NombreGirlandes) {
    Girlande g;
    g.nombreLumiere = NombreGirlandes;
    g.couleurs = (int*)malloc(NombreGirlandes * sizeof(int));
    for (int i = 0; i < NombreGirlandes; i++) {
        g.couleurs[i] = rand() % 15;
    }
    return g;
}

Sapin createSapin(int NombreGirlandes) {
    Sapin s;
    s.nombreGirlanes = NombreGirlandes;
    s.girlandes = (Girlande*)malloc(NombreGirlandes * sizeof(Girlande));
    int nb = 1;
    for (int i = 0; i < NombreGirlandes; i++) {
        s.girlandes[i] = createGirlande(nb);
        nb += 2;
    }
    return s;
}

void showGirlande(Girlande g) {
    for (int i = 0; i < g.nombreLumiere; i++) {
        setColor(g.couleurs[i]);
        printf("☼");
    }
    setColor(15);
    printf("\n");
}

void showSapin(Sapin s) {
    int maxGirlandes = s.girlandes[s.nombreGirlanes - 1].nombreLumiere;
    int spaces = maxGirlandes / 2;
    
    for (int i = 0; i < s.nombreGirlanes; i++) {
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        showGirlande(s.girlandes[i]);
        spaces--;
    }
}

int monochrone(Sapin s) {
    int color = s.girlandes[0].couleurs[0];
    for (int i = 0; i < s.nombreGirlanes; i++)
    {
        for (int j = 0; j < s.girlandes[i].nombreLumiere; j++)
        {
            if (s.girlandes[i].couleurs[j] != color)
            {
                return 0;
            }
        }
    }
    return 1;
}

// int count_color(Sapin s) {
//     int color[16] = {16};
//     int colorplacement = 0;
//     for (int i = 0; i < s.nombreGirlanes; i++)
//     {
//         for (int j = 0; j < s.girlandes[i].nombreGirlandes; j++)
//         {
//             int found = 0;
//             for (int k = 0; k < colorplacement; k++)
//             {
//                 if (s.girlandes[i].couleurs[j] == color[k])
//                 {
//                     found = 1;
//                     break;
//                 }
//             }
//             if (!found)
//             {
//                 color[colorplacement] = s.girlandes[i].couleurs[j];
//                 colorplacement++;
//             }
//         }
//     }
//     return colorplacement;
// }

int *count_color(Sapin s, int *taille) {
    int color[15] = {0};
    for (int i = 0; i < s.nombreGirlanes; i++)
    {
        for (int j = 0; j < s.girlandes[i].nombreLumiere; j++)
        {
            color[s.girlandes[i].couleurs[j]]++;
        }
    }
    int max_color = color[0];

    for (int i = 1; i < 15; i++) {
        if (color[i] > max_color) {
            max_color = color[i];
        }
    }

    int *answer = (int*)malloc(0 * sizeof(int));
    int count = 0;
    for (int i = 0; i < 15; i++) {
        if (color[i] == max_color) {
            answer = (int*)realloc(answer, (count + 1) * sizeof(int));
            answer[count] = i;
            count++;
        }
    }
    *taille = count;
    return answer;
}

int main() {
    int count;
    srand(time(NULL));
    SetConsoleOutputCP(CP_UTF8);
    Sapin s = createSapin(10);
    showSapin(s);
    printf("Monochrone: %d\n", monochrone(s));
    // printf("Nombre de couleurs: %d\n", count_color(s));
    int *answer = count_color(s, &count);
    printf("Couleur max: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d, ", answer[i]);
    }
    printf("\n");
    free(answer);
    return 0;
}
