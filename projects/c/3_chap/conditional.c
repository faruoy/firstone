#include<stdio.h>
int main(){
       int age;
       printf("Enter your age\n");
       scanf("%d", &age);
       
       if(age>=18) {
          printf("Yes, You are Eligible to Drive\n\n");
                }
       else if(age>=16) {
       printf("You can now drive vehicles under 50cc");
       }  
      else{
      printf("Sorry You cannot drive :)");}
 return 0;                 
}
