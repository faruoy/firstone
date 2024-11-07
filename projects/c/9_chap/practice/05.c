/*Create an array of 5 complex numbers created in Problem 5 and display them
with the help of a display function. The values must be taken as an input from
the user*/
#include<stdio.h>
typedef struct complex
{
   int re;
   int img;
}comp;
void display(complex c){
    printf("%d + %di\n",c.re,c.img);

}

int main(){
    comp list[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter real part of z%d: ",i+1);
        scanf("%d",&list[i].re);
        printf("Enter imaginary part of z%d: ",i+1);
        scanf("%d",&list[i].img);
        display(list[i]);
    }
printf("The Complex numbers are :\n");
    for (int i = 0; i < 5; i++)
    {
        
        printf("z%d = %d + %di\n",i+1,list[i].re,list[i].img);
    }
 return 0;   
}
