#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int contiuerPartie = 1;
    int nombreMystere = 0, nombreEntre = 0;
    const int MAX = 100, MIN = 1;

    while (contiuerPartie == 1) {
        srand(time(NULL));
        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
        int compteur = 0;
        while (nombreEntre != nombreMystere) {
            printf("Quel est le nombre ? ");
            scanf("%d", &nombreEntre);

            if (nombreMystere < nombreEntre)
                printf("C'est moins !\n");
            else if (nombreMystere > nombreEntre)
                printf("C'est plus !\n");
            else
                printf("Bravo, vous avez trouve le nombre mystere en %d coups\n", compteur);
            compteur++;
        }
        printf("Continuer la partie ? (oui = 1/ non = 0) \n");
        scanf("%d", &contiuerPartie);
    }
    return (0);
}
