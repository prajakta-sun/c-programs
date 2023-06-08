// 1. Implement date struct (day, month, year).
// * input and display date.
// * add given days into date.
// * compare two dates - returns number of days.


 #include<stdio.h>
 #include<conio.h>
#include<time.h>
int main()
{
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    
     printf("Current Date: %d-%d-%d", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);

  int day=0;
  int month=0;
  int year=0;
  int n=0;
  
  //printf("Enter the date\n");
  //scanf("%d/%d/%d",&day,&month,&year);
  if(month>=1&&month<=12)
  {
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
      if(day>=1&&day<=31)
      {
        printf("%d/%d/%d\n",day,month,year);
      }else{
        printf("Invalid date");
      }
    }
    else if(month==4||month==6||month==9||month==11)
    {
      if(day>=1&&day<=30)
      {
        printf("%d/%d/%d\n",day,month,year);
      }else{
        printf("Invalid date");
      }
    }
    else if(month==2)
    {
      if(year%4==0)
      {
        if(year%100==0)
        {
          if(year%400==0)
          {
            if(day>=1&&day<=29)
            {
              printf("%d/%d/%d\n",day,month,year);
            }else{
              printf("Invalid date.\n");
            }
          }
          else if(day>=1&&day<=28)
          {
            printf("%d/%d/%d\n",day,month,year);
          }else{
            printf("Invalid date");
          }
        }
        else if(day>=1&&day<=29)
        {
          printf("%d/%d/%d\n",day,month,year);
        }else{
          printf("Invalid date");
        }
      }
      else if(day>=1&&day<=28)
      {
        printf("%d/%d/%d\n",day,month,year);
      }else{
        printf("Invalid date");
      }
    }
  }
  else{
   printf("Enter number of days\n");
  scanf("%d",&n);

printf("enter first date(dd/mm/yyyy)");
scanf("%d%d%d",&d1.day,&d1.month,&d1.year);
printf("enter second date(dd/mm/yyyy)");
scanf("%d%d%d",&d2.day,&d2.month,&d2.year);
  }

if((d1.day==d2.day)&&(d1.month==d2.month)&&(d1.year==d2.year))
printf("nequal");
else
printf("nuneual");

  return 0;
  
} 