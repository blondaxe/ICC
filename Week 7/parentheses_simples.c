#include <stdio.h>
// sudo ./parentheses_simples < parentheses_simples.txt

int main() { // Il faut utiliser les pointeurs ??
    char m;
    int open = 0;

    do {
        scanf("%c", &m); // Comment faire pour ne pas avoir à mettre d'espace à la fin ??
        if (m == '(') { // Vérification comme ça ??
            open++;
        }
        if (m == ')') {
            open--;
            if (open == -1) {
                printf("Mal formé\n");
                return 0;
            }
        }
    }
    while (m == '(' || m == ')');

    if (open == 0) {
        printf("Bien formé\n");
    } else {
        printf("Mal formé\n");
    }
    
}