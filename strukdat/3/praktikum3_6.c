#include <stdio.h>

struct complex 
{ 
    int imag; 
    float real; 
}; 

struct number 
{ 
    struct complex comp; 
    int integers; 
}num1, num2;


int main(){
    num1.integers = 12; 
    num1.comp.real = 44.12; 
    num2.comp.imag = 11;

    printf("tampilkan data 1 : %d\n", num1.integers);
    printf("tampilkan data 2 : %.2f\n", num1.comp.real);
    printf("tampilkan data 3 : %d\n", num2.comp.imag);
}