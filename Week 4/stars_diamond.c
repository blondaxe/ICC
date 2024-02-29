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

    for (int a=1; a<=n-1; a++) {
        for (int b=1; b<=a; b++) {
            printf(" ");
        }

        for (int c=1; c<=2*(n-a)-1; c++) {
            printf("*");
        }

        printf("\n");
    }
}