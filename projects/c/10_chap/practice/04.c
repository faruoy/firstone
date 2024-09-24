/*Take name and salary of two employees as input from the user and write them to 
a text file in the following format:
i. Name1, 3300
ii. Name2, 7700*/
typedef struct employee{
char name[20];
int salary;
}emp;
#include <stdio.h>
int main() {
emp e1,e2;
printf("Enter the Name of Employee 1 : ");
scanf("%s",e1.name);
e1.salary=3300;
printf("Enter the Name of Employee 2 : ");
scanf("%s",e2.name);
e2.salary=7700;
FILE *ptr;
ptr=fopen("employ.txt","w");
fprintf(ptr,"%s","%d\n",e1.name,e1.salary);
fprintf(ptr,"%s","%d\n",e2.name,e2.salary);
fclose(ptr);

	return 0;


}
