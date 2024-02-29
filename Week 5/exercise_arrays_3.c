# include <stdio.h>

int main() {
    int n; 
    printf("Donnez un entier > 2 : ");
    scanf("%d", &n);

    int liste[n];
    liste[0] = 1;
    liste[1] = 1;

    if (n <= 2) {
        printf("n est trop petit");
    } else {
        for (int i=2; i<n; i++) {
            liste[i] = liste[i-1] + liste [i-2];
        }
    }

    for (int a=0; a<n; a++) {
        printf("%d ", liste[a]);
    }

    printf("\n");

    int result;
    int x; 
    printf("Donnez un entier à chercher comme différence : ");
    scanf("%d", &x);

    for (int p=0; p<n; p++) {
        for (int k=0; k<n; k++) {
            if (p != k) {
                result = liste[p] - liste[k];
                if (result == x) {
                    printf("Trouvée : %d - %d = %d\n", liste[p], liste[k], x);
                    //break; // avec break içi ça breakerai les 2 boucles ??
                    return 0;
                }        
            }
        }
    }
    printf("Pas trouvée\n");
}