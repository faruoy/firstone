#include<stdio.h>
int main(){
FILE *ptr = fopen("farru.txt","r");
int num=5;
fscanf(ptr,"%d",&num);
fclose(ptr);
printf("%d",num);
return 0;
}
