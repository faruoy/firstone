/*Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
The vectors must be two–dimensional*/
#include <stdio.h>
typedef struct vector
{
    int i;
    int j;
} vec;
int main()
{
    vec A = {3, 5};
    vec B = {23, 5};
    int sum_i = A.i + B.i;
    int sum_j = A.j + B.j;
    printf("The Vector sum of A + B = ( %d , %d )\n\n", sum_i, sum_j);
}