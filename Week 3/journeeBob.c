# include <stdio.h>

int main() {
    int h, m;
    printf("Donnez les heures : ");
    scanf("%d", &h);
    printf("Donnez les minutes : ");
    scanf("%d", &m);

// On doit mettre les parenthèses en plus pour avoir les bons trucs ??
    if ((h >= 0 && h <= 8) || (h >= 22 && h <= 24) || (h == 8 && m <= 29)) {
        printf("Bob dort");
    // s'il est entré dans le if il n'ira pas dans le else if ??
    } else if (h == 8 && m >=30) {
        printf("Bob prend le petit déjeuner");
    } else if (h == 9 || h == 10 || h == 14 || h == 15 || h == 16 || (h == 11 && m <= 44) || (h == 13 && m >= 30) || (h == 16 && m <= 59)) {
        printf("Bob travaille");
    } else if ((h == 11 && m >= 45) || (h == 12 && m <= 59)) {
        prinft("Bob mange son repas de midi");
    } else if (h == 13 && m <= 29) {
        printf("Bob boit son café");
    } else if (h == 17 && m <= 59) {
        printf("Bob est au pub (happy hour !)");
    } else if ((h >= 18 && h <= 20) || (h == 21 && m <= 59)) {
        printf("Bob fait sa lessive");
    } else {
        printf("Entrez des heures / minutes valides")
    }


}