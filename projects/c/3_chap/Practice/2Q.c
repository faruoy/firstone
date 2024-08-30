#include <stdio.h>
int main(){
//Calculate income tax paid by an employee to the government as per the slabs 
//mentioned below: 
//Income Slab     Tax                  
//2.5 – 5.0L      5%                    
//5.0L - 10.0L    20%                      
//Above 10.0L     30%                    
int Income;
printf("Enter your income in Rupees : ");
scanf("%d",&Income);
if(Income<250000){
    printf("Total tax to be paid is '0'\n");
}
else if(Income>=250000 && Income<=500000){
    printf("Total tax to be paid is %d\n",(Income-250000)*5/100);
}
else if(Income>500000 && Income<=1000000){
    printf("Total tax to be paid is %d\n",250000*5/100+(Income-500000)*20/100);
}
else if(Income>1000000){
    printf("Total tax to be paid is %d\n",250000*5/100+500000*20/100+(Income-1000000)*30/100);
}
else{
    printf("Enter a valid input\n");
}
return 0;
}