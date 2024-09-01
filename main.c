#include<stdio.h>
int main(){
int mark ;
printf("\n\n\n");
printf("          Grade Point Distibution\n");
printf("          _______________________\n\n\n");

printf("Entered your marks:");
scanf("%d",&mark);


if (mark>=80)
{
    printf("Your Grade Point: A+");

}

else if (mark>=70)
{
    printf("Your Grade Point: A");

}

else if (mark>=60)
{
    printf("Your Grade Point: A-");

}

else if (mark>=50)
{
    printf("Your Grade Point: B");

}

else if (mark>=40)
{
    printf("Your Grade Point: C");

}

else if (mark>=33)
{
    printf("Your Grade Point: D");

}

else if (mark>1)
{
    printf("You are failed,Try next time");

}

else
printf("Not a valid mark");

}

