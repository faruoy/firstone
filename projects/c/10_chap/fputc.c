#include<stdio.h>
int main(){
FILE*ptr=fopen("farru.txt","a");//int c=fgetc(ptr);
//printf("%d",c);
//char c[7]="farhan";
fputs("farhan",ptr);
fclose(ptr);
printf("\n");
return 0;
}
