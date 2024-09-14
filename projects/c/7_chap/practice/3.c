#include<stdio.h>
/*
Write a program to create an array of 10 integers and store multiplication table of
5 in it */
int main(){
int arr[10];
int*ptr=arr;
for(int i=0;i<10;i++){
printf("Enter value of arr[%d]: ",i);
scanf("%d",&arr[i]);
}
for(int j=0;j<10;j++){
printf("arr[%d]=%d\n",j,arr[j]);
}
return 0;
}

