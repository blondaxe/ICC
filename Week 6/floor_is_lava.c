#include <stdio.h>

int main() { // Quand il fallait utiliser les pointeurs ??
    int m, n, compt = 0, l = 0, c = 0;
    scanf("%d", &m);
    scanf("%d", &n);
    int map[m][n];

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &map[i][j]);
        }
    }
    
    char chemin[100] = "bbbddbddd"; // Pas de '' mais des ""

    while (chemin[compt] != '\0') {
        if (chemin[compt] == 'h' && l>0) { // Bon de vérifier comme ça ??
            l--;
        } else if (chemin[compt] == 'b' && l<m-1) {
            l++;
        } else if (chemin[compt] == 'g' && c>0) {
            c--;
        } else if (chemin[compt] == 'd' && c<n-1) {
            c++;
        }

        if (map[l][c] == 0) {
            printf("Game over %d. Bix est tombé à (%d, %d)\n", compt, l, c);
            return 0;
        }

        compt++;
    }
    
    if (l == m-1 && c == n-1) {
        printf("Bravo Bix !\n");
    } else {
        printf("Bix se trouve à (%d, %d)\n", l, c);
    }
}