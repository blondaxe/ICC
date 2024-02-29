# include <stdio.h>
# include <time.h>
#include <unistd.h>

void display(void) {
    char lcd [10][4][4] = {{" _ ","| |","|_|","   "}, {"   "," | "," | ","   "}, {" _ "," _|","|_ ","   "}, {" _ "," _|"," _|","   "}, {"   ","|_|","  |","   "}, {" _ ","|_ "," _|","   "}, {" _ ","|_ ","|_|","   "}, {" _ ","  |","  |","   "}, {" _ ","|_|","|_|","   "}, {" _ ","|_|"," _|","   "}};

    time_t t = time(NULL);
    int heure = localtime(&t)->tm_hour;
    int minute = localtime(&t)->tm_min;
    int seconde = localtime(&t)->tm_sec;

    int h2 = heure % 10;
    int h1 = heure / 10;

    int m2 = minute % 10;
    int m1 = minute / 10;

    int s2 = seconde % 10;
    int s1 = seconde / 10;
        
    for (int x=0; x<4; x++) {
        if (x==1 || x==2) {
            printf("%s %s . %s %s , %s %s\n", lcd[h1][x], lcd[h2][x], lcd[m1][x], lcd[m2][x], lcd[s1][x], lcd[s2][x]);
        } else {
            printf("%s %s   %s %s   %s %s\n", lcd[h1][x], lcd[h2][x], lcd[m1][x], lcd[m2][x], lcd[s1][x], lcd[s2][x]);
        } 
    }
    printf("\n");
    printf("\n");
    printf("\n");
}

int main(){
    display();
    for (int i=0; i<10000; i++) {
        sleep(1);
        display();
    }
}