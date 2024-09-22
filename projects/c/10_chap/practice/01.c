#include<stdio.h>
int main(){
//Write a program to read three integers from a file.
FILE *ptr;
ptr=fopen("int.txt","r");
int num;
int in;
int sc;
fscanf(ptr,"%d",&num);
fscanf(ptr,"%d",&in);
fscanf(ptr,"%d",&sc);
printf("%d\n",num);
printf("%d\n",in);
printf("%d\n",sc);
fclose(ptr);
return 0;
}

