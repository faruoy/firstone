#include<stdio.h>
int main(){
FILE*ptr=fopen("farru.txt","a");//int c=fgetc(ptr);
//printf("%d",c);
int c;
fputc('c',ptr);
fclose(ptr);
return 0;
}
