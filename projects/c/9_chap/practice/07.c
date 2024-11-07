/*Write a structure capable of storing date. Write a function to compare those
dates.*/
#include <stdio.h>
typedef struct dates
{
    int day;
    int month;
    int year;
} date;
int main()
{
    date d1 = {18, 9, 2022};
    date d2 = {18, 9, 2027};
    if (d1.year > d2.year)
    {
        printf("Date %d/%d/%d comes before %d/%d/%d\n", d2.day, d2.month, d2.year, d1.day, d1.month, d1.year);
    }
    
    else if(d1.year == d2.year && d1.month > d2.month)
    {
        printf("Date %d/%d/%d comes before %d/%d/%d\n", d2.day, d2.month, d2.year, d1.day, d1.month, d1.year);
    }

    else if(d1.year == d2.year &&d1.month == d2.month && d1.day > d2.day)
    {
    printf("Date %d/%d/%d comes before %d/%d/%d\n", d2.day, d2.month, d2.year, d1.day, d1.month, d1.year);
    }


   else if(d1.year == d2.year &&d1.month == d2.month && d1.day == d2.day)
     {
    printf("Date %d/%d/%d is same as %d/%d/%d\n",d2.day,d2.month,d2.year,d1.day,d1.month,d1.year);
     }

     else{
        printf("Date %d/%d/%d is same as %d/%d/%d\n",d1.day,d1.month,d1.year,d2.day,d2.month,d2.year);
     }

return 0;
}