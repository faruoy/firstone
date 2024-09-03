//Write a program to change the value of a variable to ten times of its current
//value
#include<stdio.h>
int mult(int* a){
    
    printf("Ten times the number %d is %d\n",*a,10*(*a));

    return 5;
}
int main(){
    int a=6;
    mult(&a); // call by reference
 // call by name 

    return 0;
}