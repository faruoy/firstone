#include<stdio.h>
int main(){
    //Write a program to determine whether a character entered by the user is 
    //lowercase or not
char ch='a';
printf("This is %c\n",ch);
printf("The value of this is %d\n",ch);
//in asci table letters from 97-122 are lowercase
if(ch>=97&&ch<=122){
    printf("This is \"lower case\"\n");
}
else{
    printf("This is \"not\" a lower case\n");
}
return 0;
}