/*Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the 
array. */
#include<stdio.h>
int main(){
int num[10]={1,2,3,4,5,6,7,8,9,0};int*ptr=num;
printf("Before incrementing This is pointing towards index[1]= %d\n",*ptr);
ptr=ptr+2;
printf("Now after incrementing pointer is pointing towards index[3]  %d\n",*ptr);
return 0;
}
