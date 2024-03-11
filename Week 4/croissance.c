// Terminal : sudo ./croissance < fichier.txt

#include <stdio.h>
# include <math.h>

int main() { // Comment faire avec le fichier sur 2 lignes
    char a[101];
    int nb[] = {0,1,2,3,4,5,6,7,8,9};
    fgets(a, 100, stdin);

    int l=0, precedent=9999999, score=0; // precedent pris grand pour pas que le premier terme soit compté comme une augmentation
    int tmp, new;

    while (a[l] != ' ') {
        l++;
    }

    int compt = 0;
    for (int i=0; i<l; i++) {
        compt += pow(10, l-i-1) * nb[a[i]-48]; // Pour transformer le char[] en int[]
    }

    printf("Il y a %d valeurs à analyser\n", compt);

    for (int x=1; x<=compt; x++) { // Il faut par contre toujours mettre un espace à la fin du fichier pour le dernier chiffre
        new = 0;
        l++;
        tmp = l;
        while (a[l] != ' ') {
            l++;
        }

        for (int i=tmp; i<l; i++) { // Obiligé de mettre un int si on l'a déjà défini ou on peut le redéfinir ??
            new += pow(10, l-i-1) * nb[a[i]-48]; // Pour transformer le char[] en int[]
        }

        if (new > precedent) {
            score ++;
            printf("%d précédé par %d\n", new, precedent);
        }
        precedent = new;
    }
    printf("Donc il y a %d valeur(s) qui sont plus grandes que les valeurs précédentes\n", score);
}