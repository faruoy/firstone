/*Write a program to encrypt a string by adding 1 to the ascii value of its 
characters*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Paise takiye ke niche hai";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i]=str[i]+1;
    }

    printf("%s\n",str);
return 0;    
}