#include<stdio.h>
//  Write a program to accept marks of five students in an array and print the on the screen
int main(){
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of marks[%d]\n",i);
        scanf("%d",marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks[%d] is %d\n",i,marks[i]);
    }
    
return 0;  
}