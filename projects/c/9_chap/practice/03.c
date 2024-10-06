#include <stdio.h>
/*Write a program to illustrate the use of arrow operator → in C*/
typedef struct member
{
    int code;
    char n[67];
    float salary;
} mem;

int main()
{
    mem m1 = {466, "Farhan", 567.76};
    mem*ptr = &m1;
    printf("\nThe code of Employee is %d\nThe Name of Employee is %s\nThe Salary of Employee is %f\n", ptr->code, ptr->n, ptr->salary);
}
