#include <stdio.h>

//void swapp();

int main() {

    int a = 10, b = 30;
    int tmp = b;
    b = a;
    a = tmp;
    printf("a = %d et b = %d\n", a, b);



    int vec[5] = {1, 2, 3, 4, 5};
    a = vec[4];

    for (int i=4; i>0; i--){
        vec[i] = vec[i-1];
    }
    vec[0] = a;

    for (int z=0; z<5; z++){
        printf("%d", vec[z]);
    }
    printf("\n");


    char chaine[] = "string";

    
    for (int x=0; x<5; x++){
        for(int y=0; y<=x; y++){
            printf("%c", chaine[y]);
        }
        printf("\n");
    }


    printf("*---------*\n");
    printf("|         |     /\\\n");
    printf("|         |    /  \\\n");
    printf("|         |   /    \\\n");
    printf("|         |  /      \\\n");
    printf("|         | /        \\\n");
    printf("|         | \\        /\n");
    printf("|         |  \\      /\n");
    printf("|         |   \\    /\n");
    printf("|         |    \\  /\n");
    printf("*---------*     \\/\n");


    int liste[5] = {11, 14, 19, 16, 25};
    int x = 5;
    
    int max = liste[0];
    int min = liste[0];

    for (int j=1; j<5; j++) {
        if (liste[j] > max) {
            max = liste[j];
        } if (liste[j] < min) {
            min = liste[j];
        }
    }

    if (max-min > x) {
        printf("min = %d et max = %d TRUE\n", min, max);
    }
    

    int lutain[6] = {0, 1, 1, 0, 1, 0};
    
    for (int x=0; x<=6; x++) {
        for (int i=0; i<=6; i++) {
            if (lutain[i+1]==0){
                int tmp=lutain[i];
                lutain[i]=lutain[i+1];
                lutain[i+1]=tmp;
            }
        }
    }

    for (int j=0; j<=5; j++) {
        printf("%d",lutain[j]);
    }


    return 0;
}
/*
int swapp(){
    
    printf("%d", b);
}
*/