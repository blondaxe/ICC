#include <stdio.h>
#include <time.h>

long mem[100]; //Bien de mettre en global comme ça ??

long fib_rec(int n) {
    if (n == 1){
        return 1;
    }
    if (n == 2){
        return 1;
    }

    return fib_rec(n-1)+fib_rec(n-2);
}

long fib_men(int n) {
    if (n == 1){
        return 1;
    }
    if (n == 2){
        return 1;
    }
    if (mem[n] == 0){
        mem[n] = fib_men(n - 1) + fib_men(n - 2);
    }
    return mem[n];
}

int main() {
    clock_t clock_start = clock();
    long fib42 = fib_rec(42);
    clock_t clock_end = clock();
    printf(
        "Solution naive (%ld): %.2lf ms\n", fib42 ,
        (clock_end - clock_start) * 1000.0 / CLOCKS_PER_SEC
    );

    clock_t clock_start2 = clock();
    long fib42_men = fib_men(42);
    clock_t clock_end2 = clock();
    printf(
        "Solution naive (%ld): %.2lf ms\n", fib42_men ,
        (clock_end2 - clock_start2) * 1000.0 / CLOCKS_PER_SEC
    );
}