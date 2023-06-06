#include<stdio.h>
int main()
{
    int i,marks[20],sum;

    printf("Enter marks of 6 subjects:  \n ");
    for(i=0; i<6; i++)
    scanf("%d", &marks[i]);
    sum=0;
    for(i=0; i<6; i++)
    sum=sum + marks[i];
    printf ("total marks %d  \n",sum);

        return 0;
}

