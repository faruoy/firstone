#include<stdio.h>
int main(){
int Year;
printf("Enter the Year\n");
scanf("%d",&Year);
/*if(Year%4==0){
    if(Year%100==0){
    if(Year%400==0){
        printf("This is a Leap Year\n");}}}
if(Year%4==0){
    if(Year%100!=0){
        printf("This is a Leap Year\n");
    }}
if(Year%4==0){
    if(Year%100==0){
    if(Year%400!=0){
        printf("This is not a Leap Year\n");}}}
else{
    printf("This is not a leap Year");
} */
if(Year%4==0 && Year%100!=0 || Year%400==0){
    printf("This is Leap Year\n");
}else{
    printf("This is not a leap Year\n");
}
return 0;

}