#include <stdio.h>

int main() {
    int math_grade;
    int english_grade;
    int moyenne;

    printf("Entrer la note de Math: ");
    scanf("%d", &math_grade);

    printf("Entrer la note d'Anglais: ");
    scanf("%d", &english_grade);
    
    moyenne=(math_grade+english_grade)/2;
    if (moyenne<10){
        printf("Recalé");
    }
    else if (moyenne<12){
        printf("Passable");
    }
    else if (moyenne<14){
        printf("Assez bien");
    }
    else if (moyenne<16){
        printf("Bien");
    }
    else{
        printf("Très bien");
    }

    return 0;
}