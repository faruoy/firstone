#include<stdio.h>
/*Write a function for strcpy of your own*/
int strlength(char str[]){
    int i=0,count;
    char c=str[i];
    while (c!='\0')
    {
       c=str[i];
       i++;
    }
    count=i-1;
return count;
}
void mystrcpy(char target[],char source[]){
    for (int i = 0; i < strlength(source); i++)
    {
        target[i]=source[i];
    }
    target[strlength(source)]='\0';
        
}

int main(){
    char source[]="Happy";
    char target[45];
    mystrcpy(target,source);
    printf("%s %s\n",source,target);
return 0;
}