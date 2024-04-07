/*

Exo 1 :

Il affiche : "70 1000"
inspect cherche le nombre le plus grand
- Pour le premier, il commence à 0 et fini à 3 de "v"
- Pour le deuxième, il commence à 4 et fini à 8

int inspect(int *tab, int size) {
    printf("%d", tab[0]); // Affiche "12" puis "122"
}

int v[] = {12, 1, 70, -4, 122, 223, 1, 2, 1000};
inspect(v, 4);
inspect(v+4, 4); // On donne une liste qui commence à l'indice 4



Exo 2 :

Il affiche : "rats repus"
- On boucle pour arriver à la moitié de la liste,
string[0] ("début") prend la valeur de gnirts[0] ("fin") et inversement
car *string représente le pointeur vers le ("début") du texte et gnirts le pointeur vers la ("fin")

*/