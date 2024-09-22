#include<stdio.h>
int main(){
FILE *ptr;
ptr=fopen("farru.txt","r");
int num;
if(ptr==NULL){
printf("The file doesn't exists\n");
} else{
fscanf(ptr,"%d",&num);
printf("%d\n",num);
fclose(ptr);
}
return 0;
}






