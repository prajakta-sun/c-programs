#ifndef_HELO_H
#define_HELO-H
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