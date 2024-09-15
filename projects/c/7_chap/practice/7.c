#include<stdio.h>
/* Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 
and 9 respectively*/
int main(){
int arr[3][10]={{2,4,6,8,10,12,14,16,18,20},
               {7,14,21,28,35,42,49,56,63,70},
               {9,18,27,36,45,54,63,72,81,90}
               };
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 10; j++)
    {
    printf("%d  ",arr[i][j]);
    }
 printf("\n");
    
}
printf("\n\n\n");
return 0;
}


