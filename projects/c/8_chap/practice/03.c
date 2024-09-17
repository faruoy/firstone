#include<stdio.h>
/*Write a function slice() to slice a string. It should change the original string such 
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position 
for slice*/
char* slice(char str[],int m, int n){
    char* ptr1 = &str[m];
    char* ptr2 = &str[n];

    str=ptr1;
    str[n]='\0';
    return str;
}
int main(){         
char str[]="Mohammed Mohd Farhan";
printf("%s\n",slice(str,2,7));


return 0;
}