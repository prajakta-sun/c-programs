#include<stdio.h>
int main()
{
int a,marks;
printf("enter your marks");
scanf("%d",&marks);

switch(marks/10)
{
    case 9:
            printf("grade A");
    break;

    case 8:
            printf("grade B");
    break;

    case 7:
            printf("grade C");
    break;

    case 6:
            printf("grade D");
    break;

    default :
            printf("grade F");
    break;       


}
return 0;
}