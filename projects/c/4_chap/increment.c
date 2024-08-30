#include<stdio.h>
int main(){
    int i=5;
    i=i+5;
    printf("The value of i is %d\n",i);//10
    i++;//11
    printf("The value of i is %d\n",++i);//12
    i+=2; //compound assignments are +=,-=,*=,/= etc
    printf("The value of i is %d\n",i);
}
//i++ prints first and then increments called post increment operator
 //++i increments first and then prints called pre increment operator