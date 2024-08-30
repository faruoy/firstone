#include<stdio.h>
int main(){
    //write a program to print first n natural no. using do while
    int i=1; int n;
    printf("Enter value of n\n");
    scanf("%d",&n);
    do{
       printf("%d\n",i); 
       i++;
     } while(i<=n);
return 0;
}