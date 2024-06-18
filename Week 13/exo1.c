#include <stdio.h>

typedef struct info {
    char *nom;
    int temps_sec;
} info_t;

void to_file(FILE *out, const info_t *record) {
    int len = strlen(record->nom);
    fwrite(&len, sizeof(int), 1, out);
    fwrite(record->nom, sizeof(char), len, out);
    fwrite(&record->temps_sec, sizeof(int), 1, out);
}

void from_file(FILE *in, info_t *record){
    int len;
    fread(&len, sizeof(int), 1, in);
    record->nom = malloc(len + 1);
    fread(record->nom, sizeof(char), len, in);
    record->nom[len] = 0; // End of string
    fread(&record->temps_sec, sizeof(int), 1, in);
}

int main(){
    FILE* file = fopen("message_secret.msg", "r");
    info_t data[] = {{"Alice", 11}, {"Alexandra", 13}, {"Antoine", 9}, {"Karim", 10}};
    for (int i=0; i<4; i++) {
        to_file()
    }


}
