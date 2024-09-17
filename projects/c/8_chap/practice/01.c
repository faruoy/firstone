/*Write a program to take string as an input from the user using %c and %s confirm 
that the strings are equal.*/
#include<stdio.h>
int main(){
char str[7];
for (int i = 0; i < 6; i++)
{
   scanf("%c",&str[i]);
   fflush(stdin);
}
str[6]='\0';
printf("%s\n",str);
return 0;
}

