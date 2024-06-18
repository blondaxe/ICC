#include <stdio.h>



int visiter_tableau(int i, int j, char* instructions, int taille){
    if (i<0 || j<0 || i>M || j>N || map[i][j] == 0 || vu[i][j] == 1) {
        return 0;
    }
}

int main(){
    int M, N; //Comment rendre ces variables globales (accéssibles par la fonction visiter_tableau)
    scanf("%d", &M);
    scanf("%d", &N);

    char * instructions[101];

    int vu[M][N], map[M][N];
    for (int a=0; a<M; a++){
        for (int b=0; b<M; b++){
            scanf("%d", &map[a][b]);
            vu[a][b] = 0;
        }
    }

    visiter_tableau(0, 0, instructions,0);



}