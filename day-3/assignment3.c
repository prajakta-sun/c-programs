#include<stdio.h>
int main()
{
 int num,rom;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("rom");        

    switch (num)
    
case 1:
    (num >= 1000)  // 1000 - m

    {
         printf("m")
         num -= 1000;
    }
case 2:
       (num >= 900)   // 900 -  cm

        { 
           printf("cm");
           num -= 900;
        }        

case 3:
        (num >= 500)   // 500 - d
        {           
           printf("d");
           num -= 500;
        }

case 4:
        (num >= 400)   // 400 -  cd
        {
           printf("cd");
           num -= 400;
        }

case 5:
       (num >= 100)   // 100 - c
        {
           printf("c");
           num -= 100;                       
        }

case 6:
         (num >= 90)   // 90 - xc
        {
           printf("xc");
           num -= 90;                                              
        }

case 7:
        (num >= 50)    // 50 - l
        {
           printf("l");
           num -= 50;                                                                     
        }

case 8:
       (num >= 40)    // 40 - xl
        {
           printf("xl");           
           num -= 40;
        }
case 9:
        (num >= 10)    // 10 - x
        {
           printf("x");
           num -= 10;           
        }

case 10:
         (num >= 9)     // 9 - ix
        {
           printf("ix");
           num -= 9;                         
        }

case 11:
       (num >= 5)     // 5 - v
        {
           printf("v");
           num -= 5;                                     
        }

case 12:
         (num >= 4)     // 4 - iv
        {
           printf("iv");
           num -= 4;                                                            
        }

case 13:(num >= 1)     // 1 - i
        {
           printf("i");
           num -= 1;                                                                                   
        }

    

  return 0; 
}


