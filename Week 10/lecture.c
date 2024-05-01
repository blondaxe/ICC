# include <stdio.h>
# include <stdlib.h>

typedef struct _call_record
{ // Faut définir ça ailleurs ??
    int client;
    int date;
    int num;
    int temps;
} call_record_t;

typedef struct _tarif
{
    int id;
    float prix; //Il faut un float ici ou un autre
} tarif_t;


typedef struct _data
{
    int M, N;
    call_record_t *records;
    tarif_t *tarifs;
} data_t;


void temps_total_mois(const data_t *pdata, int mois, int *total_minutes){
    int a, b;
    for (int j=0; j<(pdata->M); j++) {
        a = pdata->records[j].date;
        b = a / 100;
        if (b == mois) {
            total_minutes[pdata->records[j].client] += (pdata->records[j].temps);
        }
    }
}

void temps_total(const data_t *pdata, int *total_minutes){
    for (int j=0; j<(pdata->M); j++) {
        total_minutes[pdata->records[j].client] += (pdata->records[j].temps);
    }
}

float cout_minute(const data_t *pdata, int tel){
    for (int i=0; i<(pdata->N); i++) {
        if (tel == pdata->tarifs[i].id) {
            return (pdata->tarifs[i].prix);
        }
    }
    return 0.2;
}

void cout_total_mois(const data_t *pdata, int mois, float *total_cout){
    float prix_minute;
    int num_tel, a, b;

    for (int i=0; i<(pdata->M); i++) {
        a = pdata->records[i].date;
        b = a / 100;
        if (b == mois) {
            num_tel = pdata->records[i].num;
            prix_minute = cout_minute(pdata, num_tel);

            total_cout[(pdata->records[i].client)] += prix_minute * (pdata->records[i].temps);
        }
    }
}

int main() {

    int M, N;
    scanf("%d", &M);
    scanf("%d", &N);

    data_t *data = malloc(sizeof(data_t));
    data->M = M;
    data->N = N;

    data->records = malloc(M * sizeof(call_record_t));
    data->tarifs = malloc(N * sizeof(tarif_t));


    for (int i = 0; i < M; i++)
    {
        scanf("%d", &data->records[i].client);
        scanf("%d", &data->records[i].date);
        scanf("%d", &data->records[i].num);
        scanf("%d", &data->records[i].temps);
    }

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &data->tarifs[i].id);
        scanf("%f", &data->tarifs[i].prix);
    }

    int total_minutes[10];
    for (int k=0; k<10; k++) {
        total_minutes[k] = 0;
    }
    temps_total(data, total_minutes);

    for (int k=0; k<10; k++) {
        printf("Client %d : %d min\n", k, total_minutes[k]);
    }
    printf("\n");



    for (int k=0; k<10; k++) {
        total_minutes[k] = 0;
    }
    temps_total_mois(data, 202311, total_minutes);

    for (int k=0; k<10; k++) {
        printf("Client %d : %d min\n", k, total_minutes[k]);
    }
    printf("\n");


    float total_cout[10];
    for (int k=0; k<10; k++) {
        total_cout[k] = 0;
    }
    cout_total_mois(data, 202311, total_cout);

    for (int k=0; k<10; k++) {
        printf("Client %d : CHF %f\n", k, total_cout[k]);
    } // Comment arrondir le nombre
    printf("\n");


    free(data->records);
    free(data->tarifs);
    free(data);
}