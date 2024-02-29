#include <stdio.h>

int main() 
{
    int i, j, k, n;

    printf("n = ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("No solution.");
        return 0; // ! EARLY EXIT FROM THE PROGRAM !
    }

    for (i = 1; i <= n; i++) 
    { // LOOP 1

        for (j = 1; j < i; j++) 
        { // LOOP 2
            printf(" ");  // PRINTING SPACES
        }

        for (k = 1; k <= (n - i + 1); k++) 
        { // LOOP 3
            printf("*"); // PRINTING STARS
        }

        printf("\n"); // NEW LINE  
    }

    return 0;
}
