#include<stdio.h>
#include<string.h>
struct employee
{
 char name;
 int code;
 float salary;
  
  };
   int main(){
  struct employee e1 = {'t',466, 209.6};
  struct employee harry = {'h',567,234.56};
  printf("%c %d %f\n",harry.name, harry.code, harry.salary);
    


return 0;

   }
