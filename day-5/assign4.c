// 4. Create a C program for user login and signup functionality using file I/O. The program should
// allow users to sign up with a unique username and password and subsequently log in with their
// credentials.
// Specifications:
// When the program starts, provide the following options to the user:
// a. Sign up
// b. Log in
// c. Exit


#include <stdio.h> 
#include <string.h> 
#include <conio.h> 
 
struct user{
char fullname[30];
char email[30];
char username[20]; 
char password[12]; 
 char stelen[20];
};
 
 
void takeinput(char ch[30]){
fgets(ch,50,stdin);

}
 void generateusername(char email[30],char username[20]){
 for(int i=0;i<strlen(email);i++){
    if(email[i]='@')break;
    else username[i]=email[i];
 }}
int main() 
{    int choice;
    char username[20]; 
    char password[12]; 
   
     printf("choice \n");
     scanf("%d",&choice);
     printf("1.signup");
     printf("2.login \n");
     printf("3.exit \n");
     printf("Enter your username:\n"); 
    scanf("%s",&username); 
    
        printf("Enter your password:\n"); 
        scanf("%s",&password); 
    
        if(strcmp(username,"prajaktagaware97@gmail.com")==0){ 
            if(strcmp(password,"12341234")==0){ 
    
            printf("\nWelcome.Login Success!"); 
    
    
            }
            else{ printf("\nwrong password"); 
            } 
        }
        else{ printf("\nexit"); 
        } 
    
        return 0; 
    
    } 