/*
Exo 1 :

Expression A: 1  car 1er opération vrai donc 1 
Expression A: 1  car ça ne peut pas être faux
Expression A: 1  car ça ne peut pas être faux

*/

# include <stdio.h>

// Est ce qu'on peut initialiser un grand nombre de variable automatiquement dans une boucle ??
int main() {
    int a, b, c, tmp;
    int tableau[3];
    printf("Premier entier : "); // On demande de cette façon ??
    scanf("%d", &a);
    printf("Deuxième entier : ");
    scanf("%d", &b);
    printf("Troisième entier : ");
    scanf("%d", &c);
    printf("%d %d %d\n", a, b, c);

    tableau[0] = a;
    tableau[1] = b;
    tableau[2] = c;
    
    for (int x=0; x<2; x++) {
        for (int i=0; i<2; i++) {
            if (tableau[i+1] > tableau[i]) {
                tmp = tableau[i];
                tableau[i] = tableau[i+1];
                tableau[i+1] = tmp;
            }
        }
    }

    for (int y=0; y<3; y++) {
        printf("%d ", tableau[y]);
    }
}