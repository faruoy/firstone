#include<stdio.h>
/*   Write a program using function to print the following pattern (first n lines) 
 
 
* 
* * * 
* * * * *
* * * * * * *


*/
int pattern(int n);
int pattern(int n){
       for (int i = 1; i <= n; i++)
       {
        for (int j = 0; j < 2*i-1; j++)
        {
        printf("*");
        }
        printf("\n");
       }
       }

int main(){
    printf("%d",pattern(5));
}