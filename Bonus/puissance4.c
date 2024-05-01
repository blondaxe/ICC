#include <stdio.h>

char joueurs[2] = {'0', 'E'}; // Un symbole pour chaque joueur ici
int cond = 1, verif = 0;
int rangee, jou, a, b, x, y, t, u, v, w;


char grille[][7] = {
    {' ', ' ', ' ', ' ', ' ', ' ', ' '}, 
    {' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' '},
};

void display(char matrice[][7]) {
    for (int i = 0; i < 6; i++) {
        printf("|---|---|---|---|---|---|---|\n");
        printf("| ");
        for (int j = 0; j < 7; j++) {
            printf("%c | ", matrice[i][j]);
        }
        printf("\n");
    }
    printf("|---|---|---|---|---|---|---|\n");
    printf("  0   1   2   3   4   5   6  \n");
}

void jeu(int player) {
    display(grille);

    verif = 0;
    do {
        printf("Joueur : %c , donnez la rangée choisie : ", joueurs[player]);
        scanf("%d", &rangee);

        if (rangee > 6 || rangee < 0 || grille[0][rangee] != ' ') {
            verif = 0;
        } else {
            verif = 1;
        }
    } while (verif == 0);

    for (int k=5; k>=0; k--) {
        if (grille[k][rangee] == ' ') {
            grille[k][rangee] = joueurs[player];
            break;
        }
    }
}

int verifier() {
    for (int jou=0; jou<2; jou++) {
        
        for (int a=0; a<6; a++) { // En horizontal
            for (int b=0; b<4; b++) {
                if (grille[a][b] == joueurs[jou] && grille[a][b+1] == joueurs[jou] && grille[a][b+2] == joueurs[jou] && grille[a][b+3] == joueurs[jou]) {
                    display(grille);
                    printf("\n");
                    printf("Joueur : %c a gagné la partie !!!\n", joueurs[jou]);
                    return 0;
                }
            }
        }

        for (int x=0; x<7; x++) { // En vertical
            for (int y=0; y<3; y++) {
                if (grille[y][x] == joueurs[jou] && grille[y+1][x] == joueurs[jou] && grille[y+2][x] == joueurs[jou] && grille[y+3][x] == joueurs[jou]) {
                    display(grille);
                    printf("\n");
                    printf("Joueur : %c a gagné la partie !!!\n", joueurs[jou]);
                    return 0;
                }
            }
        }

        for (int t=0; t<4; t++) { // En diagonale montant à gauche
            for (int u=0; u<3; u++) {
                if (grille[u][t] == joueurs[jou] && grille[u+1][t+1] == joueurs[jou] && grille[u+2][t+2] == joueurs[jou] && grille[u+3][t+3] == joueurs[jou]) {
                    display(grille);
                    printf("\n");
                    printf("Joueur : %c a gagné la partie !!!\n", joueurs[jou]);
                    return 0;
                }
            }
        }

        for (int v=6; v>2; v--) { // En diagonale montant à droite
            for (int w=0; w<3; w++) {
                if (grille[w][v] == joueurs[jou] && grille[w+1][v-1] == joueurs[jou] && grille[w+2][v-2] == joueurs[jou] && grille[w+3][v-3] == joueurs[jou]) {
                    display(grille);
                    printf("\n");
                    printf("Joueur : %c a gagné la partie !!!\n", joueurs[jou]);
                    return 0;
                }
            }
        }

    }
    return 1;
}

int main() {
    int tour = 0;

    while (cond == 1) {
        jeu(tour);
        if (tour == 0) {
            tour++;
        } else {
            tour--;
        }
        cond = verifier();
    }
    return 0;
}