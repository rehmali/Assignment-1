#include<stdio.h>
int main()
{
    int userChoice=0;
    printf("\t\tTimetable of Class of Computer Science 2019\n");
    printf("\nEnter 1 to see Monday's Class.");
    printf("\nEnter 2 to see Tuesday's Class.");
    printf("\nEnter 3 to see Wednesday's Class.");
    printf("\nEnter 4 to see Thursday's Class.");
    printf("\nEnter 5 to see Friday's Class.");

    printf("\nEnter your choice... : ");
    scanf("%d",&userChoice);

    if(userChoice==1)
    {
        printf("\nToday is Introduction to Computer Technology Class .");
    }

    else if (userChoice==2)
    {
        printf("\nToday is Fundamentals of Programming Class .");
    }

    else if(userChoice==3)
    {
        printf("\nToday is Applied Physics Class .");
    }

      else if(userChoice==4)
    {
        printf("\nToday is English Composition Class .");
    }

      else if(userChoice==5)
    {
        printf("\nToday is Calculus Class .");
    }
    else
    {
        printf("\nWrong Input, Program is quiting....");
    }

}
