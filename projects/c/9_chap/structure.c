#include<stdio.h>
#include<string.h>
struct employee
{
   char name[67];	
   int roll;
   float salary;
};
int main(){
struct employee e1;
strcpy(e1.name,"Farhan");
e1.roll=23;
e1.salary=459.56;
printf("%s %d %.2f \n",e1.name,e1.roll,e1.salary);


return 0;
}

