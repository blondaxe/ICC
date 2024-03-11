# include <stdio.h>

int main() {
    int a;
    printf("Donnez un nombre positif : ");
    scanf("%d", &a);

    for (int i=1; i<=a; i++) {
        if (a%i == 0) {
            printf("%d ", i);
        }
    }
    printf("sont des diviseurs de %d\n", a);
}