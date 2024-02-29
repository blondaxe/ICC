# include <stdio.h>
# include <time.h>

int main() {
    // ex 1
    int n, nb;
    printf("Donner un nombre à 3 chiffres : ");
    scanf("%d", &n);
    
    for (int i=3; i>0; i--) {
        nb = n % 10;
        n = n / 10;
        printf("nb %d : %d\n", i, nb);
    }

    double vec[] = {1, 2, 3, 4, 6};
    //double somme = vec[0] + vec[1] + vec[2] + vec[3] + vec[4];
    double moyenne = (vec[0] + vec[1] + vec[2] + vec[3] + vec[4]) / 5;
    printf("La moyenne est %g\n", moyenne);
    
    // ex 2
    /*
    - Le fait de multiplier par 1/5 fait que ça renvoie 0
    pourquoi ????
    - Le fait de diviser par 5 fait que ça renvoie 0
    - La dernière version est fausse car on affiche un int pas un double
    comment le corriger ???? (Lisez les 5 nombres depuis stdin avec scanf) ????
    */

    

    // ex 3, 4, 5
    char four [4][4] = {"   ",
                        "|_|",
                        "  |",
                        "   "
                        };
    char two [4][4] = {" _ ",
                       " _|",
                       "|_ ",
                       "   "
                        };
    char zero [4][4] = {" _ ",
                        "| |",
                        "|_|",
                        "   "
                        };

    for (int b=0; b<4; b++) {
        printf("%s %s %s %s\n", two[b], zero[b], two[b], four[b]);
    }
    
    int chiffre;
    printf("Donner un chiffre : ");
    scanf("%d", &chiffre);

    char lcd [10][4][4] = {{" _ ","| |","|_|","   "}, {"   "," | "," | ","   "}, {" _ "," _|","|_ ","   "}, {" _ "," _|"," _|","   "}, {"   ","|_|","  |","   "}, {" _ ","|_ "," _|","   "}, {" _ ","|_ ","|_|","   "}, {" _ "," _|","  |","   "}, {" _ ","|_|","|_|","   "}, {" _ ","|_|"," _|","   "}};

    for (int c=0; c<4; c++) {
        printf("%s\n", lcd[chiffre][c]);  
    }

    time_t t = time(NULL);
    int heure = localtime(&t)->tm_hour;
    int minute = localtime(&t)->tm_min;

    int h2 = heure % 10;
    int h1 = heure / 10;

    int m2 = minute % 10;
    int m1 = minute / 10;
    
    printf("%d%d : %d%d\n", h1, h2, m1, m2);
    
    for (int x=0; x<4; x++) {
        if (x==1 || x==2) {
            printf("%s %s . %s %s\n", lcd[h1][x], lcd[h2][x], lcd[m1][x], lcd[m2][x]);
        } else {
            printf("%s %s   %s %s\n", lcd[h1][x], lcd[h2][x], lcd[m1][x], lcd[m2][x]);
        } 
    }
}    