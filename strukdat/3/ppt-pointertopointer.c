#include <stdio.h>
int main () {
    int var = 789;
    int *ptr2;
    int **ptr1;
    int ***ptr0;
    int ****ptra;

    ptr2 = &var;
    ptr1 = &ptr2;
    ptr0 = &ptr1;
    ptra = &ptr0;

    printf("Nilai var = %d\n", var);
    printf("Nilai var menggunakan single pointer = %d\n", *ptr2);
    printf("Nilai var menggunakan double pointer = %d\n", **ptr1);
    printf("Nilai var menggunakan triple pointer = %d\n", ***ptr0);
    printf("Nilai var menggunakan quadra pointer = %d\n", ****ptra);
    return 0;
}