/*Create a structure representing a bank account of a customer. What fields did
you use and why?*/
#include<stdio.h>
typedef struct account{
    char bankname[20];
    char name[20];
    int number;
    char ifsc[20];   
}bank;
int main(){
    bank acc = {"SBI","Mohammed Farhan",123456789,"SBIN5460988"};
    printf("Bank name : %s\n",acc.bankname);
    printf("Name : %s\n",acc.name);
    printf("Acc no : %d\n",acc.number);
    printf("IFSC Code : %s\n\n",acc.ifsc);
return 0;
}