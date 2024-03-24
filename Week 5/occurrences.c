# include <stdio.h>

int strlen_icc(const char string[], int taille_max) {
    int l;
    for (l=0; l<=taille_max; l++)
        if (string[l] == '\0') {
            break;
        }
    return l;
}

int main() {
    const int l_max = 100;
    int compt, nb_occurrence;
    char texte[l_max + 1];
    char occurrence[l_max + 1];

    printf("Donnez une occurrence à trouver : ");
    scanf("%100s", occurrence);
    printf("Donnez un texte où il faudra trouver l'occurrence : ");
    scanf("%100s", texte);

    int len_occurrencee = strlen_icc(occurrence, l_max);
    int len_texte = strlen_icc(texte, l_max);
    
    //char try[len_occurrencee + 1];

    if (len_occurrencee > len_texte) {
        printf("La taille de l'occurrence doit être plus petite que la taille du texte\n");
    } else {
        for (int i=0; i < len_texte-len_occurrencee+1; i++) {
            compt = 0;
            for (int j=0; j < len_occurrencee; j++) {
                if (texte[i+j] == occurrence[j]) {
                    compt++;
                    if (compt == len_occurrencee) {
                        nb_occurrence++;
                    }
                }
            }
        }
    printf("Le nombre d'occurrence est de : %d\n", nb_occurrence);
    }
}