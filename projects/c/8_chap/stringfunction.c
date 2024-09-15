#include<stdio.h>
#include<string.h>
int main(){
char st[]="Farhan";
printf("%d\n",strlen(st)); //strlen prints the length of the string
char s1[]="apple";
char s2[30];
strcpy(s2,s1); // copies s1 to s2
printf("%s %s\n",s1,s2);
strcat(s1,st); // merge s1 with st
printf("%s\n",s1);
printf("%d\n",strcmp(s1,st));





return 0;
}