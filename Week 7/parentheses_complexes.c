#include <stdio.h>
// sudo ./parentheses_complexes < parentheses_complexes.txt

int main() {
    char m;
    int open1 = 0;
    int open2 = 0;
    int open3 = 0;
    int dernier = 0;
    char liste_dernier[101];

    do {
        scanf("%c", &m);
        if (m == '(') {
            open1++;
            liste_dernier[dernier] = '(';
            dernier++;
        }
        if (m == ')') {
            open1--;
            dernier--;
            if (liste_dernier[dernier] != '(' || dernier < 0) { // Car si un caractère est close : le dernier de la liste doit être le même caractère
                printf("Mal formé\n");
                return 0;
            } else {

            }
        }
        if (m == '{') {
            open2++;
            liste_dernier[dernier] = '{';
            dernier++;
        }
        if (m == '}') {
            open2--;
            dernier--;
            if (liste_dernier[dernier] != '{' || dernier < 0) {
                printf("Mal formé\n");
                return 0;
            }
        }
        if (m == '[') {
            open3++;
            liste_dernier[dernier] = '[';
            dernier++;
        }
        if (m == ']') {
            open3--;
            dernier--;
            if (liste_dernier[dernier] != '[' || dernier < 0) {
                printf("Mal formé\n");
                return 0;
            }
        }

        if (open1 == -1 || open2 == -1 || open3 == -1) {
                printf("Mal formé\n");
                return 0;
            }
        
    }
    while (m == '(' || m == ')' || m == '{' || m == '}' || m == '[' || m == ']');

    if (open1 == 0 && open2 == 0 && open3 == 0) {
        printf("Bien formé\n");
    } else {
        printf("Mal formé\n");
    }
}