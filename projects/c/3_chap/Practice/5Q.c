#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter value of a\n");
    scanf("%d",&a);
    printf("Enter value of b\n");
    scanf("%d",&b);
    printf("Enter value of c\n");
    scanf("%d",&c);
    printf("Enter value of d\n");
    scanf("%d",&d);
    printf("Input values are a=%d b=%d c=%d d=%d\n",a,b,c,d);
    if(a>b && a>c && a>d){
        printf("%d is the greatest\n",a);
    }
    else if(b>c && b>d){
        printf("%d is the greatest\n",b);
    }
    else if(c>d){
        printf("%d is the greatest\n",c);
    }
    else{
        printf("%d is the greatest\n",d);
    }
return 0;
}