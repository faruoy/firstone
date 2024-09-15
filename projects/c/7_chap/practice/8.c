#include<stdio.h>
/* Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 
and 9 by taking input from the users*/
int main(){
int arr[3][10];
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 10; j++)
    {
    printf("Value of arr[%d][%d] = ",i,j);
    scanf("%d",&arr[i][j]);
    }
}
printf("The 2-D Array\n");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 10; j++)
    {
        
        printf("%4d ",arr[i][j]);
    }
    printf("\n");
}
printf("\n");
return 0;
}