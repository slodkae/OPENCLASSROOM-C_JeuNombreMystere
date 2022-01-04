#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int contiuerPartie = 1;
    int nombreMystere = 0, nombreEntre = 0;
    int choixMenu = 0;

    printf("=== Menu ===\n\n");
    printf("1. entre 1 et 100 \n");
    printf("2. entre 1 et 1000 \n");
    printf("3. entre 1 et 10000 \n");
    scanf("%d", &choixMenu);

    switch (choixMenu) {
        case 1 :
        while (contiuerPartie == 1) {
            const int MAX = 100, MIN = 1;
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
            const int MAX = 1000, MIN = 1;
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
        case 3:
        while (contiuerPartie == 1) {
            const int MAX = 10000, MIN = 1;
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
}
