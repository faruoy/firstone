#include<stdio.h>
//Write a recursive function to calculate the sum of first ‘n’ natural numbers.
int sum(int);
int sum(int n){
       if(n<0){
        printf("Enter a valid number");
       }
       return (n*(n+1))/2;
}
int main(){
    int n=100;
    printf("The sum of first %d natural numbers is %d\n",n,sum(n));
}
