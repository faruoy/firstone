#include <stdio.h>
int main() {
    float a,b;
    char operator;
    printf("\nEnter Operator(+,-,x,/): ");
    scanf("%c",&operator);
    printf("Enter a:");
    scanf("%f",&a);
    printf("Enter b:");
    scanf("%f",&b);
    switch(operator)
    {
        case('+'):
            printf("Sum of %.2f+%.2f=%.2f\n",a,b,a+b);
            break;
        case('-'):
            printf("%.2f-%.2f=%.2f\n",a,b,a-b);
            break;
        case('*'):
            printf("%.2fx%.2f=%.2f\n",a,b,a*b);
            break;
        case('/'):
            if(b!=0) {
                printf("%.2f/%.2f=%.2f",a,b,a/b);
            }else{
                printf("Not Valid\n");
            }
            break;
        default:
            printf("Not valid operator\n");



    }

    return 0;
}

