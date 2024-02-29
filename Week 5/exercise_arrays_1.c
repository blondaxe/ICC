# include <stdio.h>

int main() {
    int n; // On peut déclarer un N (en maj) ??
    printf("Donnez un entier positif : ");
    scanf("%d", &n);

    int liste[n];

    for (int i=0; i<n; i++) {
        liste[i] = i+1;
    }

    for (int a=0; a<n; a++) {
        printf("%d ", liste[a]);
    }
    printf("\n");



    int sum = 0;
    for (int b=1; b<=n/2; b++) {
        sum = sum + (liste[b-1]*liste[n-b]);
    }
    printf("sum = %d\n", sum);



    for (int try=0; try<3; try++) {
        int k;
        printf("Donnez un entier : ");
        scanf("%d", &k); // Si on donne un float, il va arrondir ??

        if (k>0 && k<n) {
            int copie[n];

            for (int z=0; z<n; z++) {
                copie[z] = liste[z]; // Autre façon pour copier le tableau ??
            }

            for (int x=0; x<n; x++) {
                liste[(x+k)%n] = copie[x%n]; // Smart d'utiliser les congruences
            }

            for (int compt=0; compt<n; compt++) {
                printf("%d ", liste[compt]);
            }
            printf("\n");
            break;
        }
        printf("La valeur doit etre entre 0 et le premier nombre\n");
    }

    // Grave ou pas si j'ai pas de return ??
}