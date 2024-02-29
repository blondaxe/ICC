# include <stdio.h>

int main() {
    int nb;
    printf("Choisissez un nombre entre 1 et 7 : ");
    scanf("%d", &nb);

    if (nb==1) {
        printf("Lundi");
    } else if (nb==2) {
        printf("Mardi");
    } else if (nb==3) {
        printf("Mercredi");
    } else if (nb==4) {
        printf("Jeudi");
    } else if (nb==5) {
        printf("Vendredi");
    } else if (nb==6) {
        printf("Samedi");
    } else if (nb==7) {
        printf("Dimanche");
    } else {
        printf("Vous devez choisir un nombre entre 1 et 7");
    }
}