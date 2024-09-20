#include <stdio.h>

int main() {
    int heure, minute;
    scanf("%d:%d", &heure, &minute);
    minute=(minute+1)%60;
    if (minute==0)
        heure=(heure+1)%24;
    printf("L'heure dans une minute est : %02d:%02d\n", heure, minute);
    return 0;
}