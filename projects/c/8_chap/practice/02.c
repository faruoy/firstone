#include<stdio.h>
/*Write your own version of strlen function from <string.h> */
int strlength(char str[]){
char str[];
int i=0,count;
char c=str[i];
while (c!='\0')
{
    c=str[i];
    i++;
}
count=i-1;
printf("%d\n",count);
return count;
}
int main(){
char str[]="class";
strlength(str);

return 0;
}