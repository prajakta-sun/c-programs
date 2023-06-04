#include<stdio.h>
int main()
{


    int choice;
    float area;
    float length,breadth,redius,height;

        printf("1. rectangle  2. tringle  3. circle\n");
    printf( "enter your choice \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            //rectangle
            printf("enter length and breadth \n");
            scanf("%f %f", &length ,&breadth);
            area=length*breadth;
            break;

        case 2:
            //tringle
            printf("enter  breadth and height \n");
            scanf("%f %f" , &breadth ,&height);
            area= 0.5*breadth*height;
            break;
        
        case 3:
            //circle
            printf("enter redius \n");
            scanf("%f" ,&redius);
            area= 3.142*redius*redius;
            break; 
        
        
    }
    printf("Area = %f",area);


    return 0;

}

