# include <stdio.h>

int main() {
    int n; 
    printf("Donnez un nombre de ligne : ");
    scanf("%d", &n);
    int m; 
    printf("Donnez un nombre de colonne : ");
    scanf("%d", &m);

    int liste[n][m]; // Lignes puis colonnes

    if (n<=0 || m<=0) {
        printf("Les valeurs entrées doivent être positives !");
    } else {
        printf("\n");
        int compt = 0;
        for (int lin=0; lin<n; lin++) {
            for (int col=0; col<m; col++) {
                compt++;
                liste[lin][col] = compt;
            }
        }

        for (int a=0; a<n; a++) {
            for (int b=0; b<m; b++) {
                printf("%d ",liste[a][b]);
            }
            printf("\n");
        }
    printf("\n");
    }


    int transpose[m][n];
    for (int lign=0; lign<m; lign++) {
            for (int colo=0; colo<n; colo++) {
                transpose[lign][colo] = liste[colo][lign];
            }
        }

    for (int a=0; a<m; a++) {
            for (int b=0; b<n; b++) {
                printf("%d ",transpose[a][b]);
            }
            printf("\n");
        }
    printf("\n");


}