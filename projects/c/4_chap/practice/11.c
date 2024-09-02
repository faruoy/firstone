#include<stdio.h>
int main(){
    int n=178; int prime=1; int i=2;
    while(i<n){
        if(n%i==0){
            printf("%d is not Prime Number\n",n);
            prime=0;
            break;  
            } i++;
    }

if(n==1 || n==0){
   printf("%d is not Prime Number\n",n); 
}
else if(prime){
    printf("%d is Prime Number\n",n);
}

return 0;

}