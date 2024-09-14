/*Write a program containing a function which reverses the array passed to it.*/
#include<stdio.h>
int rev(int*arr[4]){
int temp;
*arr[0]=*arr[3];
return 5;
}
int main(){
int arr[4]={1,2,3,4};
rev(&*arr);
printf("%d and %d\n",arr[0],arr[3]);
return 0;
}
