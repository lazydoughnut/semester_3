#include <stdio.h> 

int main() {
    int *p;
    int a = 10;

    p = &a;
    printf("%d",p); //gaada pointer nampilin alamat p doang 
    printf("\n");
    printf("%d",&a);//casenya sm kyk p atas
    printf("\n");
    printf("%d",*p); //buat nampilin nilai yg ditunjuk sm p di case ini yg ditunjuk alamat a
}