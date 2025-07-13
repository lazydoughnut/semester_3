#include <stdio.h> 

struct student 
{
    char name[50]; 
    int age; 
}; 

void main() 
{ 
    struct student s1; //ngedeklarasiin nama var dr struct
    printf("Enter name: "); //input nama
    gets(s1.name);          //buat readln
    printf("Enter age: ");  //input umur
    scanf("%d", &s1.age);   //nyimpen data umur, & untuk references
    display(s1); // passing structure as an argument 
    //manggil display ni kyk procedure di pascal
} 
// membuat fungsi dengan struct sebagai parameter 
void display(struct student s) //ngebikin subprogram display
{ 
    printf("\nDisplaying information\n"); 
    printf("Name: %s", s.name); 
    printf("\nRoll: %d", s.age); 
}    