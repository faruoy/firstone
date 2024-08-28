#include<stdio.h>
int main() {
 //simple interest formula PTR/100

 int P;
 int T;
 int R;
 printf("Enter Principal Amount P\n");
 scanf("%d" , &P);

 printf("Enter Tenure T\n");
 scanf("%d" , &T);

 printf("Enter Rate Of Interest R\n");
 scanf("%d" , &R);

 printf("Simple Interest with P %d T %d and R %d is %f\n \n" , P ,T , R , (P*T*R)/100);




    return 0;
}