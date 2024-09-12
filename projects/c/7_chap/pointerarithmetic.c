#include<stdio.h>
int main(){
    int arr[]={2,4,7};
    int *ptr = arr;
    for (int i = 0; i < 3; i++)
    {
        printf("The value of index[%d] is %d\n",i,arr[i]);
        //printf("The value of index[%d] is %d\n",i,*ptr);
        printf("The address of index[%d] is %u\n",i,ptr);
        ptr++;
    }
    
    return 0;
}