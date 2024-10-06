#include<stdio.h>
#include<stdlib.h>
int main() {
/*Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to 
make it store 15 number (from 7 x 1 to 7 x 15).*/
int *ptr;
ptr=(int*)calloc(10,sizeof(int));
for(int i = 0; i < 10 ; i++)
	 { 
	ptr[i]=7*(i+1);
	printf("The value of index[%d] is %dx%d=%d\n",i,7,i+1,7*(i+1));
		  }
ptr=(int*)realloc(ptr,sizeof(int));
for(int i = 0; i < 15 ; i++) {               ptr[i]=7*(i+1);
    printf("Value of index[%d] is 7x%d=%d\n",i,i+1,ptr[i]);
}
return 0;
}
