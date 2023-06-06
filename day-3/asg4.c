#include<stdio.h>
#include<conio.h>
void main()
{
   
int dep_no,dep_name;
char dsg_code;
//char M,S,s,C;
int employee_id;
//char M='Manager', S='Supervisor', s='Security oficer', C='Clerk';

    printf("Enter a dsg_code: ");
    scanf("%c", &dsg_code);

    printf( "enter employee_id \n");
    scanf("%d",&employee_id);

    // printf("enter a designation_code: ");
    // scanf("%c", &dsg_code);

    printf("enter a dept_no \n");
    scanf("%d",&dep_no);

switch (dep_no/10)
{
case 1:
      printf(" employee with employee_id %d ",employee_id);

      printf("is working in marketing dept as a %c", dsg_code);
      
    break;

case 2:
     printf("dep_no");
    
     break;

case 3:
    printf("dep_name");
   
    break;


case 4:
     printf("dsg_code");
     
     break;


     
}
//return 0;
}


