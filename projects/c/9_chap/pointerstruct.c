#include<stdio.h>
struct members
{
    char name[56];
    int code;
    float salary;
};
int main(){

struct members m1={"farhan",466,2345.67};
struct members *ptr1;
ptr1 = &m1;
printf("%s %d %f\n",(*ptr1).name,(*ptr1).code,(*ptr1).salary);
printf("%s %d %f\n",ptr1->name,ptr1->code,ptr1->salary);
return 0;
}