/*Write a program with a structure representing a complex number*/
#include<stdio.h>
typedef struct complex
{
    int re;
    int img;
} comp;
int main()
{
    comp z1 = {3, 7};
    comp z2 = {6, 88};
    printf("Complex numbers are z1 = %d+%di & z2 = %d+%di \n", z1.re, z1.img, z2.re, z2.img);
}