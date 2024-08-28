#include<stdio.h>
int main(){
   if(1){
    printf("Since This is Non-Zero Value so this is Executed\n\n");
   }
   if(1.902){
    printf("Since This is Non-Zero Value this is also Executed\n\n");
   }
    if(0){
    printf("Oh! This is  not a non-zero value\n");
   }
   else{
     printf("Oh! That If contained a \"0\" in it so it just didn't worked :(\n\n");
   }
   
   
   return 0;
}