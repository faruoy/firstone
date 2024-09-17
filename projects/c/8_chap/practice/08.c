#include<stdio.h>
#include<string.h>
/*Write a program to check whether a given character is present in a string or not*/
int main(){
char str[]="My name is Mohammed Farhan";
char c='A'; int contain=0;
for (int i = 0; i < strlen(str); i++)
{
    if (str[i]==c)
    {
        contain=1;
        break;
    }
}
if (contain)
{
printf("Yes it contains\n");
}
else{
    printf("No it doesn't contain\n");
}

return 0;
}