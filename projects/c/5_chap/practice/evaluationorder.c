#include<stdio.h>
int main(){
    //What will the following line produce in a C program: 
   int a = 4; 
   printf("%d %d %d \n", a, ++a, a++); 
   return 0;
   // 4 6 6 Both answers are correct and depends on the compilers
   // 4 5 5  evaluation order either L->R Or R->L
} 