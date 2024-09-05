#include<stdio.h>
// Write a program using recursion to calculate nth element of Fibonacci series.
// 0,1,1,2,3,5,8,13,21,34...........nth
// fibo(n)=fibo(n-1)+fibo(n-2)
int series(int);
int series(int n){
    if(n==1 || n==2){ // base case
        return n-1;
    }
    return series(n-1)+series(n-2);
     
    }

    int main(){
        int n=6;
        printf("The value %dth value of Fibonacci series is %d\n",n,series(n));
    }