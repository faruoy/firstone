#include<stdio.h>
int main(){
// string is a character array with null character at the end

//char st[]={'a','b','c','\0'};
char st[]="abc"; // same as above
for (int i = 0; i < 3; i++)
{
    printf("character %c is %c\n",i,st[i]);
}
printf("%s\n",st);
return 0;
}