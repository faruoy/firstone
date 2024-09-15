/*Write a program containing functions which counts the number of positive 
integers in an array*/
#include<stdio.h>
int count(int arr[],int n){
    int no_of_positive=0;
   for (int i = 0; i < n; i++)
   {
      if (arr[i]>0)
      {
        no_of_positive++;
      }
    }
  return no_of_positive; 
}
int main(){
    int arr[]={3,-6,-5,6,4,-11};
    printf("No. of Positive integers are %d\n\n",count(arr,6));
return 0;
}