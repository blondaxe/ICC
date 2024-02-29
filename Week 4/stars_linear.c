# include <stdio.h>

int main() {
    int n;
    printf("Donner un nombre : ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        printf("*");
    }
    printf("\n");
}