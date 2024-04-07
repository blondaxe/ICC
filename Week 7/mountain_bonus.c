#include <stdio.h>
// sudo ./mountain_bonus < mountain.txt

int main() {
    char c;
    int liste[101][2]; // Indice 0 stocke l'indice i (km), indice 1 stocke la hauteur (après la pente pas avant)
    int liste2[101][2];
    char caract[101];
    int i = 0, h = 0, haut = 0, bas = 0;

    do {
        scanf("%c", &c);

        if (c == '/') {
            caract[i] = '/';
            liste[i][0] = i;
            liste[i][1] = h;  
            h++;
        } else if (c == '\\') {
            h--;
            caract[i] = '\\';  
            liste[i][0] = i;
            liste[i][1] = h;
        } else {
            caract[i] = '_';
            liste[i][0] = i; 
            liste[i][1] = h;
        }

        if (h > haut) {
            haut = h;
        } else if (h < bas) {
            bas = h;
        }

        i++;
    } while (c == '_' || c == '/' || c == '\\');


    int max, indice;
    int sommet[101];

    for (int x=0; x<i; x++) {
        max = -999;
        for (int y=0; y<=i; y++){
            if (liste[y][1] > max) {
                max = liste[y][1];
                indice = y;
            }
        }
        liste2[indice][1] = liste[indice][1];
        liste[indice][1] = -999;
        sommet[x] = indice; // Donne les indices des altitudes par ordre décroissant
    }

    int bornes[101][2]; // Indice 0 : Début de la borne, indice 1 : Fin de la borne
    int nb_borne;
    char afficher[i];
    for (int z=haut; z>=bas; z--) {
        nb_borne = 0;
        for (int k=0; k<i; k++){
            
            bornes[nb_borne][0] = 0;

            if (liste2[sommet[k]][1] == z){
                afficher[sommet[k]] = caract[sommet[k]];

                if (caract[sommet[k]] == '/'){
                    bornes[nb_borne][0] = sommet[k];
                } else if (caract[sommet[k]] == '\\'){
                    bornes[nb_borne][1] = sommet[k];
                    nb_borne++;
                }

            } else {
                for (int j=0; j<nb_borne; j++){
                    if (sommet[k] >= bornes[j][0] || sommet[k] <= bornes[j][1]){
                        afficher[sommet[k]] = '^';
                    } else {
                        afficher[sommet[k]] = ' ';
                    }
                }
            }
        }

        for (int compt=0; compt<i; compt++){
            printf("%c", afficher[compt]);
        }
        printf("\n");
    }

}