# include <stdio.h>

int main() {

    int size;
    scanf("%d", &size);
    if (size < 0) {
        printf("Error: Array size cannot be negative...\n");
        return 0;
    }

    struct complex_number array1[size], array2[size], sum_of_two_arrays[size];
    for (int i = 0; i < size; i++) {
        scanf("%f %f %f %f\n", &(array1[i].real), &(array1[i].imag), &(array2[i].real), &(array2[i].imag));
    }

}