/*Write a program to generate multiplication table of a given number in text 
format. Make sure that the file is readable and well formatted*/#include<stdio.h>
int main(){
FILE *ptr;
ptr=fopen("table.txt","w");
int n;
printf("Enter the number : ");
scanf("%d",&n);
for(int i=0;i<10;i++){
fprintf(ptr,"%d x %d = %d",n,i+1,n*(i+1));
fprintf(ptr,"%c",'\n');
}
return 0;
}			


