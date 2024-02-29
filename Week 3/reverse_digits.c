# include <stdio.h>

int main() {
    
    int x;
    printf("Choisissez un nombre à 3 chiffres : ");
    scanf("%d", &x);

    if (x > 999) { // Est-ce qu'on peut passer à la condition avec certain char ??
        printf("This number has more than four digits!");
    } else if (x < 0) {
        printf("This is not a positive number!");
    } else {
        int nb1 = x % 10;
        x = x / 10;
        int nb2 = x % 10;
        x = x / 10;
        int nb3 = x % 10;
        x = x / 10;  
        printf("%d%d%d", nb1, nb2, nb3);
    }    
}