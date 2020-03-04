#include<stdio.h>
int main(){
int a = 5;
int *b;
int **c; //c is pointer of pointer
b = &a;
c = &b;
printf("value of a = %d\n", a);
printf("value of a = %d\n", *(&a)); // printing with address of a
printf("value of a = %d\n", *b); // printing with pointer b
printf("value of a = %d\n", **c); //printing with pointer of pointer
printf("value of a = %d\n", **c);
return 0;
}
