#include<stdio.h>
//Write a program to print the address of a variable. Use this address to get the
//value of the variable
int main(){
    int i=67;
    int*j=&i
    printf("The address of %d is %p\n",i,&i);
    printf("The value at %d is %d\n",i,*j);
     
}