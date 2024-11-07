#include<stdio.h>
typedef struct complex
{
   int real;
   int img;
}comp;
complex sum(complex c1, complex c2){
    complex ans ={0,0};
    ans.real=c1.real+c2.real;
    ans.img=c1.img+c2.img;
    return ans;
}
int main(){
    int n;
   printf("Enter the value of n :");
   scanf("%d",&n);
       complex ans={0,0};

   //complex list[n];

    for (int i = 0; i < n; i++)
    {
        complex temp;
        printf("enter real & img part of z%d:",i+1);
        scanf("%d %d",&temp.real,&temp.img);
        ans=sum(ans,temp);
    }

  printf("%d+%di\n",ans.real,ans.img);


return 0;
}
