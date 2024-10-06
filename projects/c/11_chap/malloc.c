#include <stdio.h>
#include <stdlib.h> 
int main() {
	int*ptr;
	ptr=(int*)malloc(3*sizeof(int));
	int n;
	printf("\nEnter the size of array you want to create: ");	scanf("%d ",&n);
	for(int i = 0; i < n ; i++)
		 { 
	printf("Enter value of idex %d element : ",i);
	scanf("%d",&ptr[i]);
			  }
   for(int i = 0; i < n; i++)
	    { 
   printf("The value index[%d] is %d\n ",i,ptr[i]);			 
			 }
printf("\nThe value of index[%d] is %d\n",3,ptr[4]);
	return 0;
}

