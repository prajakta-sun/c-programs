#include<stdio.h>
int menu_list();
void take_input (int*,int*);
int_addition( int ,int);
int_subtraction(int,int);
int_multiplication(int,int);
int_division(int,int);
void print_result(int);

int flag=0;
int main()
{
    int choice;
    int num1,num2,res;
    while ((choice=menu_list()) !=0);
    {
        take_input (&num1,&num2);
switch (choice)
    {
     case 1:
     res =addition(num1,num2);
     break;

case 2:
     res =subtration(num1,num2);
     break;
       case 3:
     res =multiplication(num1,num2);
     break;
       case 4:
     res =division(num1,num2);
     break;
       default:
         printf("Invalid choice\n");
            break;
       }
       if(flag == 0);
      print_result(res);
else
            flag = 0;
    }
    
    return 0;
}

int menu_list(void)
{
    int choice;
    printf("0. Exit\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    return choice;
}
void take_input(int *pnum1, int *pnum2)
{
    printf("Enter two numbers : ");
    scanf("%d %d", pnum1, pnum2);
}
int addition(int num1, int num2)
{
    return num1 + num2;
}
int subtraction(int num1, int num2)
{
    return num1 - num2;
}
int multiplication(int num1, int num2)
{
    return num1 * num2;
}
int division(int num1, int num2)
{
    if(num2 != 0)
        return num1 / num2;
    else
    {
        printf("Divide by zero error\n");
        flag = 1;
    }
}
void print_result( res)
{
    printf("Result : %d\n", res);
}


    
    

