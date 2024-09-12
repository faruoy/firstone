#include<stdio.h>
int swap(int*,int*);
int swap(int*a,int*b){
    int*temp;
    *temp=*a;
    *a=*b;
    *b=*temp;
}

int main(){
    int a=100,b=200;
    swap(&a,&b);
    printf("The value of a is %d and value of b is %d\n",a,b);

return 0;    
}