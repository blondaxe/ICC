#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int a;
    srand(time(0)); // Seed the random number generator
    int secret = rand() % 10 + 1; // aleatoire entre 1 et 10 ...

    
    for (int i=3; i>0; i--) {
        printf("Devinez le nombre entre 1 et 10 (%d essais restants): ", i);
        scanf("%d", &a);

        if (i == 1) {
            if (a == secret) {
                printf("Bravo le nombre était bien : %d\n", a);
                return 0;
            } else {
                printf("Dommage le nombre était : %d\n", secret);
                return 0;
            }
        }

        if (a == secret) {
            printf("Bravo le nombre était bien : %d\n", secret);
            return 0;
        } else if (a > secret) {
            printf("Moins\n");
        } else {
            printf("Plus\n");
        }
    }
}