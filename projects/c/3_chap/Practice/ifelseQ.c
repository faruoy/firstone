//Write a program to find grade of a student given his marks based on below:
//90 – 100 => A 
//80 – 90 => B 
//70 – 80 => C 
//60 – 70 => D 
//50 – 60 => E 
//<50=> F
#include<stdio.h>
int main(){
    int Marks;
    printf("Enter your marks\n");
    scanf("%d",&Marks);
    if(90<=Marks && 100>=Marks){
    printf("You got A grade\n");
    }
    else if(80<=Marks && 90>Marks){
    printf("You got B grade\n");
    }
    else if(70<=Marks && 80>Marks){
    printf("You got C grade\n");
    }
    else if(60<=Marks && 70>Marks){
    printf("You got D grade\n");
    }
    else if(50<=Marks && 60>Marks){
    printf("You got E grade\n");
    }
    else if(Marks<50){
    printf("You got F grade\n");
    }
    else if(Marks>100){
        printf("Please Enter Marks between 0-100\n");
    }
return 0;
}

