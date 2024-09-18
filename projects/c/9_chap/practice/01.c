#include<stdio.h>
/*Create a two-dimensional vector using structures in C*/
typedef struct vector
{
    int i;
    int j;
}vec;
int main(){
vec A={3,5};
vec B={23,5};
printf("The vector A=(%d,%d)\n",A.i,A.j);
printf("The vector B=(%d,%d)\n",B.i,B.j);











}