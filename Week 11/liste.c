# include <stdio.h>
# include <stdlib.h>

typedef struct _cell
{
    int contenu;
    struct _cell *next;
} cell_t;

typedef struct _list {
    cell_t *head;
    cell_t *last;
} list_t;

const list_t liste_vide = {NULL, NULL};


void afficher_liste(const list_t *plist)
{
    printf("[");
    for (cell_t *iterator = plist->head; iterator != NULL; iterator = iterator ->next) {
        if (iterator == plist->head)
            printf("head(%d)", iterator ->contenu);
        else if (iterator == plist->last)
            printf("->last(%d)", iterator ->contenu);
        else
            printf("->(%d)", iterator->contenu);
    }
    printf("]\n");
}


void insert_head(list_t *plist, int valeur){
    cell_t *new_cell = NULL;
    new_cell = malloc(sizeof(cell_t));
    new_cell->contenu = valeur;
    new_cell->next = plist->head;

    plist->head = new_cell;
    if (plist->last == NULL) {
        plist->last = new_cell;
    }
}

int delete_head(list_t *plist){
    if (plist->head == NULL && plist->last == NULL){
        return 0;
    }
    cell_t *a = plist->head->next;
    free(plist->head);
    plist->head = a;
    return 1;

}

void insert_after(list_t *plist, cell_t *where, int valeur){
    if (where == plist->last){ // On a pas besoin de mettre * devant le where
        cell_t *new_cell = NULL; // Sera toujours la même sturcture
        new_cell = malloc(sizeof(cell_t));
        new_cell->contenu = valeur;
        new_cell->next = NULL;

        plist->last = new_cell;
        where->next = plist->last;
    } else {
        cell_t *new_cell = NULL;
        new_cell = malloc(sizeof(cell_t));
        new_cell->contenu = valeur;
        new_cell->next = where->next;

        where->next = new_cell; 
    }
}

int delete_after(list_t *plist, cell_t *where) {
    if (where == NULL || (plist->head == NULL && plist->last == NULL)){
        return 0;
    } else {
        cell_t *a = where->next->next;
        free(where->next);
        where->next = a;
        return 1;
    }
}

cell_t * find_first(const list_t *plist, int valeur){
    for (cell_t *iterator = plist->head; iterator != NULL; iterator = iterator ->next) {
        if (iterator->contenu == valeur){
            return iterator;
        }
    }
    return NULL;
}

void delete_list(list_t *plist){
    for (cell_t *iterator = plist->head; iterator != NULL; iterator = iterator ->next) {
        free(iterator);
    }
}


int main() {
    list_t nouvelle_liste = liste_vide;
    for (int i=1; i<=5; i++) {
        insert_head(&nouvelle_liste, i); // On doit mettre un & ici quand on l appele
        afficher_liste(&nouvelle_liste);
    }
    printf("\n");


    delete_head(&nouvelle_liste);
    afficher_liste(&nouvelle_liste);
    printf("\n");


    insert_after(&nouvelle_liste, nouvelle_liste.head, 7); // On met un . car ce n'est pas un pointeur
    afficher_liste(&nouvelle_liste);
    insert_after(&nouvelle_liste, nouvelle_liste.last, 10);
    afficher_liste(&nouvelle_liste);
    printf("\n");


    delete_after(&nouvelle_liste, nouvelle_liste.head->next);
    afficher_liste(&nouvelle_liste);
    printf("\n");


    find_first(&nouvelle_liste, -1);
    
    cell_t *i = find_first(&nouvelle_liste, 1);
    i->contenu = 13;
    afficher_liste(&nouvelle_liste);
    printf("\n");
    

    delete_list(&nouvelle_liste);
}