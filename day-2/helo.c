#include<stdio.h>
// #include "hello.h"

 int choice;
    int num1,num2,res;
while ((choice=menu_list()) !=0)
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
     
     } 
}