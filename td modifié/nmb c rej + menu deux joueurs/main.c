#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int compteur = 0;
    int contiuerPartie = 1;
    int nombreMystere = 0, nombreEntre = 0;
    const int MAX = 100, MIN = 1;
    int choixMenu;
    int nombreJ2;

    printf("=== Menu ===\n\n");
    printf("1. UN JOUEUR \n");
    printf("2. DEUX JOUEURS \n");
    scanf("%d", &choixMenu);

    switch (choixMenu) {
        case 1 :
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
        case 2:
        while (contiuerPartie == 1) {
            printf("JOUEUR 2 : choisir un nombre : \n");
            scanf("%d", &nombreJ2);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            int compteur = 0;
            while (nombreEntre != nombreJ2) {
                printf("Quel est le nombre ? ");
                scanf("%d", &nombreEntre);

                if (nombreJ2 < nombreEntre)
                    printf("C'est moins !\n");
                else if (nombreJ2 > nombreEntre)
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
}
