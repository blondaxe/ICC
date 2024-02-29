# include <stdio.h>

// char semaine[2] = {"Lundi", "Mardi"};
// on peut faire un truc du genre ??
 
int main() {
    int nb;
    printf("Choisissez un nombre entre 1 et 7 : ");
    scanf("%d", &nb);

    switch (nb) {
        case 1:
            printf("Lundi");
            break;
        case 2:
            printf("Mardi");
            break;
        case 3:
            printf("Mercredi");
            break;
        case 4:
            printf("Jeudi");
            break;
        case 5:
            printf("Vendredi");
            break;
        case 6:
            printf("Samedi");
            break;
        case 7:
            printf("Dimanche");
            break;
        default:
            printf("Vous devez choisir un nombre entre 1 et 7");
            break;
    }
}