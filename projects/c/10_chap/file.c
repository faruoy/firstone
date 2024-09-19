#include<stdio.h>
int main(){
FILE *ptr;
ptr=fopen("farru.txt","a");
int num=54322;
fprintf(ptr,"%d",num);
fclose(ptr);
return 0;
}
