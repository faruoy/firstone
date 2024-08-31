#include<stdio.h>
int main(){
    //Write a program to sum first ten natural numbers using do while and for loop
    int i=1;int sum=0;
    do{
     sum +=i;
     i++;
    }while(i<=10);
    printf("The sum of first 10 natural number is %d\n",sum);
    
}