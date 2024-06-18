# include <stdio.h>

int vrai = 1;
int *start;

void afficher_indice(int *tableau, int i, int taille) {
    if (i == taille-1) {
        printf("%d\n", tableau[i]);
    } else {
        printf("%d\n", tableau[i]);
        i++;
        afficher_indice(tableau, i, taille);
    }
}

void afficher_ptr(int *tableau, int taille) {
    if (vrai == 1){
        vrai = 0;
        int * start = tableau;
        printf("%p", start);
    }

    int * a = (tableau+1); // A savoir la syntaxe ici
    printf("%ld\n", (&start - &a));
// COMMENT FAIRE LA CONDITION DE SORTIE
    if ((&a - &a) == taille) {
        printf("fini");
    } else {
        printf("%d\n", *tableau);

        //afficher_ptr(a, taille);
   
    }
}


int main() {
    int N;
    scanf("%d", &N);
    int tableau[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &tableau[i]);
    }

    afficher_indice(tableau, 0, N);
    printf("\n");

    afficher_ptr(&tableau[0], N);
}