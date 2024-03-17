# include <stdio.h>
# include <ctype.h> // Pour tolower()

// sudo ./aiguilles < aiguilles.txt
// Je suis obligé de mettre un 2 backslash à la fin du fichier txt
int strlen_icc(const char string[], int taille_max) {
    int l;
    for (l=0; l<=taille_max; l++)
        if (string[l] == '\n') {
            break;
        }
    return l;
}

int main() {
    int compt=0, len_texte = 1, nb_occurrence = 0;
    char texte[101];
    char occurrence[31];

    fgets(occurrence , 30 , stdin); // Différence avec scanf ??
    int len_occurrencee = strlen_icc(occurrence, 31);
    printf("l = %d\n", len_occurrencee);

    while (len_texte != 0) {
        fgets(texte , 101 , stdin);
        len_texte = 0;
        len_texte = strlen_icc(texte, 101);
       
        for (int i=0; i < len_texte-len_occurrencee+1; i++) {
            compt = 0;
            for (int j=0; j < len_occurrencee; j++) {
                if (tolower(texte[i+j]) == occurrence[j]) {
                    compt++;
                    if (compt == len_occurrencee) {
                        nb_occurrence++;
                    }
                }
            }
        } 
    }
    printf("Le nombre d'occurrence est de : %d\n", nb_occurrence);


}