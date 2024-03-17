# include <stdio.h>
// sudo ./oil < oil.txt

int main() {
    int m, n, c, r, sum, max = 0;
    scanf("%d", &m);
    scanf("%d", &n);
    
    int grille[5][6] = {}; // Comment initialiser sans connaître les valeurs ??

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &grille[i][j]);
        }
    }


    for (int k=1; k<m-1; k++) {
        for (int l=1; l<n-1; l++) {
            sum = grille[k-1][l-1] + grille[k-1][l] + grille[k-1][l+1] + grille[k][l-1] + grille[k][l] + grille[k][l+1] + grille[k+1][l-1] + grille[k+1][l] + grille[k+1][l+1];

            if (sum > max) {
                max = sum;
                c = l+1;
                r = k+1;
            }
        }
    }

    printf("Le max sera en (%d %d), il sera de %d\n", r, c, max);
}