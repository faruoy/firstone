#include<stdio.h>
int main(){
    for(int i=0;i<100;i++){
        if (i==10)
        {
           //break; //breaks the loops and exits
           continue; //skips the iteration when 10 is being printed
        }
        printf("The value of i is %d\n",i);
        
    }
}