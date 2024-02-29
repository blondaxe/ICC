# include <stdio.h>
# include <math.h>

int main() {
    // Somme des n premiers nombres impairs positifs 1+3+5+
    int x;
    int sum = 0;
    printf("Donner un nombre : ");
    scanf("%d", &x);

    if (x < 0) {
        printf("Invalid input value!");
        // Mettre un return içi ??
    } else {
        for (int i=0; i<x; i++) {
            sum = sum + 2*i + 1;
        }
        printf("Sum of the first %d odd numbers = %d\n", x, sum);
    }

    // Somme des n premiers nombres impairs positifs 1-3+5-
    int n;
    int somme = 0;
    printf("Donner un nombre : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input value!");
        // Mettre un return içi ??
    } else {
        for (int y=0; y<n; y++) {
            somme = somme + (2*y + 1)*pow(-1,y);
        }
        printf("Sum of the first %d odd numbers = %d\n", n, somme);
    }

    // Affiche les n premiers nombres impairs positifs ou négatifs, selon signe de k (ordre décroissant)
    int k; // Peut-être négatif aussi
    printf("Donner un nombre : ");
    scanf("%d", &k);

    if (k == 0) {
        printf("0\n");
    } else if (k > 0) {
        for (int z=2*k-1; z>=1; z=z-2) {
            printf("%d ", z);
        }
        printf("\n");
    } else if (k < 0) {
        for (int z=2*k+1; z<=-1; z=z+2) {
            printf("%d ", z);
        }
        printf("\n");
    } else {
        printf("Invalid input value!");
    }

    // Calculer a puissance b
    int a;
    printf("Donner un nombre positif : ");
    scanf("%d", &a);
    int b;
    printf("Donner un nombre positif : ");
    scanf("%d", &b);

    if (a>=1 && b>=1) {
        int result = pow(a, b);
        printf("%d^%d = %d\n", a, b, result);
    } else {
        printf("The 2 numbers must be positive integers!");
    } // On peut store 32 bits soit 2^32+2^31+...+2^0  ????


    // Continuer tant qu'on a pas de nb négatif
    int t;

    do {
        printf("Donner un nombre : ");
        scanf("%d", &t); // Réparer erreur quand je donne une lettre !!!!
    } while (t >= 0);

    printf("%d\n", t);

}