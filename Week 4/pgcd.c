// Terminal : sudo ./pgcd < fichier2.txt

# include <stdio.h>
# include <math.h>

int main() {
    char a[101];
    int nb[] = {0,1,2,3,4,5,6,7,8,9};
    fgets(a, 100, stdin);


    int l=0;
    int tmp, new;

// Pour le 1er nombre
    while (a[l] != ' ') {
        l++;
    }

    int compt = 0;
    for (int i=0; i<l; i++) {
        compt += pow(10, l-i-1) * nb[a[i]-48];
    }

    printf("Il y a %d diviseur(s)\n", compt);
    int div1[compt];

    for (int x=1; x<=compt; x++) {
        new = 0;
        l++;
        tmp = l;
        while (a[l] != ' ') {
            l++;
        }

        for (int i=tmp; i<l; i++) {
            new += pow(10, l-i-1) * nb[a[i]-48]; // Pour transformer le char[] en int[] 
        }
        div1[x-1] = new;
        printf("%d\n", div1[x-1]);
    }

// Pour le 2eme nombre
    l++;
    tmp = l;
    while (a[l] != ' ') {
        l++;
    }

    int compt2 = 0;
    for (int i=tmp; i<l; i++) {
        compt2 += pow(10, l-i-1) * nb[a[i]-48];
    }

    printf("Il y a %d diviseur(s) diviseur\n", compt2);
    int div2[compt2];

    for (int x=1; x<=compt2; x++) { // Il faut enocre mettre un espace à la fin du fichier pour le dernier chiffre
        new = 0;
        l++;
        tmp = l;
        while (a[l] != ' ') {
            l++;
        }

        for (int i=tmp; i<l; i++) {
            new += pow(10, l-i-1) * nb[a[i]-48]; // Pour transformer le char[] en int[] 
        }
        div2[x-1] = new;
        printf("%d\n", div2[x-1]);
    }

// Trouver le PGCD
    int cond = 0;

    while (cond == 0) {
        if (div1[compt-1] - div2[compt2-1] == 0) {
            printf("Le PGCD est de %d\n", div1[compt-1]);
            cond = 1;
        } else if (div1[compt-1] - div2[compt2-1] > 0) {
            compt--;
        } else {
            compt2--;
        }
    }  
    return 0;
}