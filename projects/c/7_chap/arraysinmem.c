#include<stdio.h>
int main(){
    int list[]={45,65,67,12};
    int*ptr=list; //ptr pointing towards 1st element of an array
    ptr++;

    printf("The value of index[1] is %d\n",*ptr);
}