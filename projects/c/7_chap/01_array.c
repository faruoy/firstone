#include<stdio.h>
int main(){
    int marks[]={34,54,6,89,90}; // declaration of array containing 5 integers
    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks[%d] is %d\n",i,marks[i]);
    }
return 0;   
}