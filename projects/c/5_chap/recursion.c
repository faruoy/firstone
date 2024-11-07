#include<stdio.h>
int factorial(int); // prototype
int factorial(int n){ // definition
    if(n==1 || n==0){  // base condition
        return 1;
    }
    return factorial(n-1)*n;
}

int main(){
    int a;
    printf("Enter the Number : ");
    scanf("%d",&a);
    printf("\n%d!=%d\n",a,factorial(a));
    return 0;
}
