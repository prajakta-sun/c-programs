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
 

 
int main() 
{ 
    char username[20]; 
    char password[12]; 
 
 
    printf("Enter your username:\n"); 
    scanf("%s",&username); 
 
    printf("Enter your password:\n"); 
    scanf("%s",&password); 
 
    if(strcmp(username,"prajaktagaware97@gmail.com")==0){ 
        if(strcmp(password,"12341234")==0){ 
 
        printf("\nWelcome.Login Success!"); 
 
 
        }else{ 
    printf("\nwrong password"); 
} 
    }else{ 
    printf("\nexit"); 
} 
 
    return 0; 
 
} 