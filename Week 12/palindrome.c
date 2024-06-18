#include <stdio.h>
#include <string.h>

// Revoir l'utilisation de pointeur en tant qu'indice (exo palindrome et afficher_sans_boucle)

int palindrome_indice(char* chaine, int debut, int fin){
    if (debut > fin){
        return 1;
    }
    if (chaine[debut] == chaine[fin]){
        return palindrome_indice(chaine, debut+1, fin-1);
    } else {
        return 0;
    }
    
}

int main() {
    char chaine[101] = "esoperesteicietserepose";
    int fin = strlen(chaine);

    printf("%d\n", palindrome_indice(chaine, 0, fin-1));
}