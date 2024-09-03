#include<stdio.h>
void swap(int*,int*);
void swap(int* a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
	int a=65;
	int b=2;
	swap(&a,&b);
printf("value of a is %d\n",a);
printf("value of b is %d\n",b);

return 0;
}
	
