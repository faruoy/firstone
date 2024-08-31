#include<stdio.h>
int main(){
    int n=5; int i=n; int product=1;
while (i)
{    
    product *= i;
    i--;
} printf("%d!=%d\n",n,product);

return 0;


}