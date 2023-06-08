//  Write a C program that simulates a basic student management system. Use a
// switch case to handle options such as adding a student, displaying student
// information, searching for a student by name or ID, updating student information,
// and deleting a student. Implement these operations using arrays and structures.
 
 
 #include <stdio.h>
#include<string.h>
struct student  {
    char Name[50];
    int id;
    float marks;
} s[3];

int main() 
    {
    int i,b,n;
     while(b!=5)
        {    
        printf("choice option \n ");
        printf("1.Adding student \n");
        printf("2.Display  student \n");
        printf ("3.search a student by name or id  \n");
        printf("4.remove student \n");
        scanf("%d",&b);
        

        switch (b){
        case 1:
            printf("Enter information of students:\n");
            // storing information
            for (i = 0; i < 3; ++i) {
                s[i].id = i + 1;
                printf("\nFor id%d,\n", s[i].id);
                printf("Enter  name: ");
                scanf("%s", s[i].Name);
                printf("Enter marks: ");
                scanf("%f", &s[i].marks);
            }
            break;
        case 2:
            printf("Displaying Information:\n\n");
            // displaying information
            for (i = 0; i < 3; ++i) {
                printf("\nid : %d\n", i + 1);
                printf("name: ");
                puts(s[i].Name);
                printf("Marks: %.1f", s[i].marks);
                printf("\n");
            }
            break;
        case 3:
            printf("\n enter id to search \n");
            scanf(" \n %d", &n);
            for (i = 0; i < 3; ++i) {
                if (n == s[i].id )
                {
                    printf("name: %s \n", s[i].Name);
                    printf("name: %f \n", s[i].marks);

                }
            }
             break;
         case 4://(delete a student record)
        }
         printf(" \n remove student");
         scanf(" \n %d",&n);
                         
        }
    
    return 0;
}
