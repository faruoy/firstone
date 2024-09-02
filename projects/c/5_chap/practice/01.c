#include<stdio.h>
//Write a program using function to find average of three numbers.
float Average(int a, int b, int c); //prototype
float Average(int a, int b, int c){  //definition
    float d=(a+b+c)/3.0;
    printf("Average of %d,%d & %d is %f\n",a,b,c,d);
    return d;
}
int main(){

    Average(4,5,6);
    return 0;
    
}