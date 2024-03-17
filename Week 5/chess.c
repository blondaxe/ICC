# include <stdio.h>
// sudo ./chess < chess.txt

int main() {
    int n, r, c, compt;
    scanf("%d", &n);
    scanf("%d", &r);
    scanf("%d", &c);
    scanf("%d", &compt);

    int lin, col, nb = 0, delta;

    for (int i=0; i<compt; i++) {
        scanf("%d", &lin);
        scanf("%d", &col);

        delta = r - lin;

        if (lin == r || col == c) {
            nb++;
        } else if (col + delta == c || col - delta == c) {
            nb++;
        }
    }
    printf("Il y a %d reines pointant cette case\n", nb);
}