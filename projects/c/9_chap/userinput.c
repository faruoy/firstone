#include<stdio.h>
/* Write a program to store the details of 3 employees from user defined data. 
Use the structure declared above*/
struct employee {
 char name[98];
 int rollno;
 float salary;
};
int main(){
struct employee e1,e2,e3;
printf("Enter name of e1 : ");
scanf("%s",e1.name);
printf("Enter rollno of e1 : ");
scanf("%d",&e1.rollno);
printf("Enter salary of e1 : ");
scanf("%f",&e1.salary);

printf("Enter name of e2 : ");
scanf("%s",e2.name);
printf("Enter rollno of e2 : ");
scanf("%d",&e2.rollno);
printf("Enter salary of e2 : ");
scanf("%f",&e2.salary);

printf("Enter name of e3 : ");
scanf("%s",e3.name);
printf("Enter rollno of e3 : ");
scanf("%d",&e3.rollno);
printf("Enter salary of e3 : ");
scanf("%f",&e3.salary);

printf("Name of e1 is %s , rollno is %d & salary is %f\n",e1.name,e1.rollno,e1.salary);
printf("Name of e2 is %s , rollno is %d & salary is %f\n",e2.name,e2.rollno,e2.salary);
printf("Name of e3 is %s , rollno is %d & salary is %f\n",e3.name,e3.rollno,e3.salary);

return 0;

}
