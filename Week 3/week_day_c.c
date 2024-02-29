# include <stdio.h>

int main() {
    int n;
    printf("Choisissez un nombre entre 1 et 7 : ");
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("Dimanche\n");
            break;
        case 2:
            printf("Dimanche\n");
            printf("Samedi\n");
            break;
        case 3:
            printf("Dimanche\n");
            printf("Samedi\n");
            printf("Vendredi\n");
            break;
        case 4:
            printf("Dimanche\n");
            printf("Samedi\n");
            printf("Vendredi\n");
            printf("Jeudi\n");
            break;
        case 5:
            printf("Dimanche\n");
            printf("Samedi\n");
            printf("Vendredi\n");
            printf("Jeudi\n");
            printf("Mercredi\n");
            break;
        case 6:
            printf("Dimanche\n");
            printf("Samedi\n");
            printf("Vendredi\n");
            printf("Jeudi\n");
            printf("Mercredi\n");
            printf("Mardi\n");
            break;
        case 7:
            printf("Dimanche\n");
            printf("Samedi\n");
            printf("Vendredi\n");
            printf("Jeudi\n");
            printf("Mercredi\n");
            printf("Mardi\n");
            printf("Lundi\n");
            break;
        default:
            printf("Vous devez choisir un nombre entre 1 et 7");
    }

}