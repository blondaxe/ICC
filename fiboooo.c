# include <stdio.h>

int main() {
    int n = 10, r1 = 1, r2 = 1, new = 0;

    for (int i=2; i<n; i++) {
        new = r1 + r2;
        r1 = r2;
        r2 = new;   
    }

    printf("%d", new);
}