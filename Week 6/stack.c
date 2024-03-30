# include <stdio.h>

int pile[100]; // Doivent être définis car variable globale
int taille = 0, taille_max, k, nb;

int push(int objet) {
    if (taille >= taille_max) {
        printf("Erreur %d : pile remplie\n", objet);
        return 0;
    } else {
        pile[taille] = objet;
        taille++;
        return 1;
    }
}

int pop(int *p_objet) { // Utilisation pointeur içi ??
    if (taille <= 0) {
        printf("Erreur %d : pile vide\n", *p_objet);
        return 0;
    } else {
        printf("%d\n", pile[taille-1]);
        pile[--taille] = 0; // --taille permet de décrémenter taille
        return 1;
    }
}


int main() {
    scanf("%d", &taille_max);
    scanf("%d", &k);

    for (int i=0; i<k; i++) {
        scanf("%d", &nb);
        if (nb == 0) {
            pop(&i);
            // printf("%d. pop -> \n", i);
        } else if (nb == 1) {
            push(i);
            // printf("%d. push %d\n", i, i);
        }
    }
}