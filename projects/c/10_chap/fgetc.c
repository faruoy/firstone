#include<stdio.h>
int main(){
FILE *ptr=fopen("farru.txt","r");
int num;
fscanf(ptr,"%d",&num);
printf("The num is %d\n",num);
return 0;
}

