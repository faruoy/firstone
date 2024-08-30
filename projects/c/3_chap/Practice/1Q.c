#include<stdio.h>
int main(){
int a,b,c;
printf("Enter Marks in a : ");
scanf("%d",&a);
printf("Enter Marks in b : ");
scanf("%d",&b);
printf("Enter Marks in c : ");
scanf("%d",&c);

if(a<33||b<33||c<33){
    printf("You are failed due to less marks in individual subject(s)\n");
}
else if((a+b+c)<40){
    printf("You are failed due to less percentage\n");
}
else{
    printf("You are passed!!\n");
}
return 0;
}