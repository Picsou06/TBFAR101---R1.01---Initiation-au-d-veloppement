#include <stdio.h>
#include <stdlib.h>

#include <windows.h>
#include <dos.h>
#include <dir.h>

/// /////////////////////////////////////////////////////////////////////// ///
/// Proc�dure pour changer l'affichage du texte dans la console             ///
/// 0 : noir        4 : rouge       8  : gris fonc�     12 : rouge clair    ///
/// 1 : bleu        5 : magenta     9  : bleu clair     13 : magenta clair  ///
/// 2 : vert        6 : brun        10 : vert clair     14 : jaune          ///
/// 3 : cyan        7 : gris clair  11 : cyan clair     15 : blanc          ///
/// source de cette fonction : https://askcodez.com/comment-changer-la-     ///
/// couleur-du-texte-et-de-la-console-de-couleur-dans-codeblocks.html       ///
/// /////////////////////////////////////////////////////////////////////// ///
void setColor(int ForgC)
{
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
                 //Mask out all but the background attribute, and add in the forgournd color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
}

int minimum (int nb1, int nb2)
{
    if (nb1<=nb2)
        return nb1 ;
    return nb2 ;
}

int maximum (int nb1, int nb2)
{
    if (nb1>=nb2)
        return nb1 ;
    return nb2 ;
}

int saisieEntier (int borneInf, int borneSup)
{
    int nb ;
    printf("Veuillez saisir un entier compris entre %d et %d\n", borneInf, borneSup) ;
    scanf ("%d", &nb) ;
    while ( (nb<borneInf) || (nb>borneSup) )
    {
        printf("Veuillez saisir un entier compris entre %d et %d\n", borneInf, borneSup) ;
        scanf ("%d", &nb) ;
    }
    return nb ;
}

void afficherEntier (char message [], int val)
{
    printf("%s %d\n", message, val) ;
}


