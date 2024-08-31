#include<stdio.h>
int main(){
    //Write a program to calculate the factorial of a given number using a for loop
   int n; int i;int mult=1;
   printf("Enter value of n to find n! : ");
   scanf("%d",&n);
   for (i=n ; i; i--)
   {
     mult *= i;
   }
   printf("n!=%d\n",mult);
   
return 0;
}