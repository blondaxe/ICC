# include <stdio.h>

int main() {
    int n;
    printf("Donner un nombre : ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        for (int x=1; x<=n-i; x++) {
            printf(" ");
        }

        for (int y=1; y<=2*i-1; y++) {
            printf("*");
        }
    
        printf("\n");
    }
}