#include <stdio.h>
int main()
{
    int age;
    printf("\nEnter your Age :");
    scanf("%d", &age);
	 if(age >= 20)
    {
     printf("You can now drive & make Heavy License for Trans portation\n");
    }
	 else if(age >= 18)
    {
    printf("You can now Drive\n");
    }
	else if(age >= 16)
        {
    printf("You can now Drive veh    icles which are under 50cc\n"	  );
    }
    else
    {
    printf("Sorry  you cannot dr	 ive\n\n");
    }
	return 0;
}
