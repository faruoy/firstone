#include <stdio.h>
int main()
{
    int age;
    printf("Enter your Age\n\n");
    scanf("%d", &age);



    if(age >= 20)
    {
        printf("You can now drive & make Heavy License for Transportation\n");
    }

    else if(age >= 18)
    {
        printf("You can now Drive :)\n");
    }

    else if(age >= 16)
    {
        printf("You can now Drive vehicles which are under 50cc\n");
    }
     else
    {
        printf("Sorry  you cannot drive\n\n");
    }

    return 0;
}