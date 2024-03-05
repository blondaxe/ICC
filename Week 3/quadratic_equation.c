# include <stdio.h>
# include <math.h>

int main() {
    float a, b, c, x, del, sol1, sol2; // Bon le float ou double ??
    printf("Valeur de a : ");
    scanf("%f", &a);
    printf("Valeur de b : ");
    scanf("%f", &b);
    printf("Valeur de c : ");
    scanf("%f", &c);

    if (a==0) {
        if (b==0) {
            if (c==0) {
                printf("Every real number is a solution of this equation.");
            } else {
                printf("This equation has no solution.");
            }
        } else {
            x = -c/b;
            printf("Solution : %f", x);
        }
    } else {
        del = pow(b, 2) - 4*a*c;
        if (del < 0) {
            printf("This equation has no solution.");
        } else if (del == 0) {
            x = -b/(2*a);
            printf("Solution : %f", x);
        } else {
            sol1 = (-b-sqrt(del))/(2*a);
            sol2 = (-b+sqrt(del))/(2*a);
            printf("Solution 1 : %f, solution 2 : %f", sol1, sol2);
        }
    }
}