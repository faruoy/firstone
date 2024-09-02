#include<stdio.h>
// call by value && call by reference
int sum(int*,int*);
int sum(int*a,int*b){
    *a=5 ;//b=15;
    return *a + *b;
}

int main(){
    int x=2;int y=6;
    printf("sum is %d\n",sum(&x,&y));
    printf("Value of a is %d\n",a);

    return 0;
}