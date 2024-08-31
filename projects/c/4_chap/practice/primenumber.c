#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n); 
   int prime=1;
   for (int i = 2; i < n; i++)
   {
       if(n%i==0){
         prime=0;
         
        break;
       }

   }

  if (prime==0)
  {
   printf("Not prime\n");
  }
  else if(n==1){
   printf("Not prime\n");
  }
  else{
   printf("Yes prime\n");
  }
   
 return 0;   
}