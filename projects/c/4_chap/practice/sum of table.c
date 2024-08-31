#include<stdio.h>
int main(){
   int i; int n=8;int sum=0;
    for(i=1;i<=10;i++){
        sum += n*i;
    } printf("The sum of multiples of 8 upto 10 is %d\n",sum);
    return 0;
}