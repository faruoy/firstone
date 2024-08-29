#include <stdio.h>
int main(){
int a;
int b;
int c;
printf("Enter the value of a\n");
scanf("%d",&a);
printf("Enter the value of b\n");
scanf("%d",&b);
printf("Enter the value of c\n");
scanf("%d",&c);
if(a>=b){
if(a>=c){
printf("%d is the greatest\n",a);
} else { 
printf("%d is the greatest\n",c);
} 
 }
else if(b>=c){
printf("%d is the greatest\n",b);
}
else{
printf("%d is the greatest",c);
}
return 0;
}
