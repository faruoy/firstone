/*Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why?*/
#include<stdio.h>
int return_5(int* ptr){
    printf("The address of i is %p\n",ptr);
    printf("The value at i is %d\n",*ptr);
}
int main(){
    int i=67;
    int*j=&i;
    printf("The address of i is %p\n",&i);
    return_5(j);


return 0;

     
}
