#include<stdio.h>
#include<string.h>
/*Write a program to count the occurrence of a given character in a string.*/
int main(){
char str[]="My name is Mohammed Farhan";
int count=0;
char c='a';
for (int i = 0; i < strlen(str); i++)
{
    if (str[i]==c)
    {
        count++;
    }
    
}
printf("%d\n",count);

}