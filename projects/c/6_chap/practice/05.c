/*. Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().*/
#include<stdio.h>
int sum(int a,int b){
    printf("Sum %d + %d = %d\n", a, b, a  +  b);
}
float avg(int a,int b){
    printf("Average  of  %d & %d is %f\n", a, b,( a +  b)/2.0);
}
#include<stdio.h>
int main(){
    int a=65;
    int b=5;
    sum(a,b);
    avg(a,b);

    return 0;
}