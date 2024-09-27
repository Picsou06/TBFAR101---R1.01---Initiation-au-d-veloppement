#include <stdio.h>

int main() {
    float nb_kw;
    float prix;
    prix = 0;
    scanf("%f", &nb_kw);
    while (nb_kw > 0)
    {
        if (nb_kw>250)
        {
            prix += 250*0.5;
            prix += 250*0.35;
            nb_kw -= 350;
            prix += nb_kw*0.2;
            break;
        }
        else if (nb_kw>100)
        {
            prix += 100*0.5;
            nb_kw -= 100;
            prix += nb_kw*0.35;
            break;
        }
        else
        {
            prix += nb_kw*0.5;
            break;
        }
    }
    printf("%f", prix);
    return 0;
}