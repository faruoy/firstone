#include<stdio.h>
int main(){
FILE *ptr;
ptr=fopen("farru.txt","w");
int num=9800000;
fprintf(ptr,"%d",num);
fclose(ptr);
return 0;
}
