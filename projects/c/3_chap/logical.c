#include <stdio.h>
int main(){
int a=1 , b=1;
printf("The value of a&&b is %d\n",a&&b);
printf("The value of a||b is %d\n",a||b);
printf("The value of not(a) is %d\n", !a);
printf("The value of not(b) is %d\n", !b);

if(a && b){
printf("Both are true\n");}
    //is same as 
if(a){
if(b){
 printf("Both are true\n");
}
}
return 0;

}