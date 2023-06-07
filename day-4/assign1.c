#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct library
{
   char title[30];
   char author[30];
   
};
int main()
{
   struct library lib[10];
   //char title[20];
   int a,b,books,i;
   a=b=books= 0;
   while(b!=4)
   {
      printf(" 1. Adding book \n");
      printf("2.Display  book \n");
      printf ("3.search a book by title :author  \n ");
       printf("4.del book \n");
      scanf("%d",&b);
   }
      switch (b){
         /* Add book */
         case 1:
             
             {
            printf ("Enter title = ");
            scanf ("%s",lib[books].title);

             for(i=0; i<4; i++)
            printf ("Enter author name = ");
            scanf ("%s",lib[books].author);
             }

            // printf ("Enter pages = ");
            printf(" exit");
           
             break;

         case 2://display book
               printf("displaying information: \n");
                for(i=0; i<4; i++)
            
            printf ("\t \nbook name = %s",lib[books].title);
            puts(lib[i].title);
            printf ("\t author name = %s",lib[books].author);
               
           break;
         case 3://search by title

            printf("search a book by title \n");
            scanf("\n %d",&books);
            for(i=0; i<4; i++)
         {
               if(books=lib[i].title)
            {
               printf("title: %s n",lib[i].title);

               printf("title: %f n",lib[i].title);
            }
            
            break;
         }
            
         case 4://search by author
         
          printf("search a book by author\n");
            scanf("\n %d",&books);
            for(i=0; i<4; i++){
               if(books=lib[i].title)
            {
               printf("title: %s n",lib[i].title);
               printf("title: %f n",lib[i].title);
            }
         case 5:
                //del book
            printf("remove book");
            break;
            }
      }
   return 0;
}