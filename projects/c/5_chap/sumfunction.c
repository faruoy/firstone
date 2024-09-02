#include<stdio.h>
int sum(int a, int b); //function prototype
int sum(int a, int b){ // function defintion
      int c=a+b;
      printf("sum %d + %d = %d\n",a,b,c);
      return c;
     }

int main(){
  int d=sum(15,16);

return 0;
}
