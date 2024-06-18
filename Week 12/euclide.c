#include <stdio.h>

int function(int a, int b, int dernier_reste) {
    if (b == 0) {
        printf("PGCD : %d\n", dernier_reste);
        return dernier_reste;
    }
    dernier_reste = b;
    b = a % b;
    a = a / dernier_reste;
    function(a, b, dernier_reste);
    return 0;
}

int main() {
    int a, b, dernier_reste;
    printf("Donnez le plus grand nombre : ");
    scanf("%d", &a);
    printf("Donnez le plus petit nombre : ");
    scanf("%d", &b);

    dernier_reste = b;

    function(a, b, dernier_reste);
}