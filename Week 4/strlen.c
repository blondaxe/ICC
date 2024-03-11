# include <stdio.h>

int main() {
    char a[101]; // le [101] après le nom de la variable
    printf("Ecrivez quelque chose : ");
    scanf("%100s", a); // Va lire au plus 100 caractères

    int l=0;
    while (a[l] != '\0') { // ' ' marche mais pas " "
        printf("%c", a[l]);
        l++;
    }
    printf("\" de longueur %d\n", l);
    // Voir l'exeption quand on met des espaces
}