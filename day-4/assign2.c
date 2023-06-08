//Write a C program that accepts a sentence from the user and counts the
//occurrences of each vowel (a, e, i, o, u) using a switch case. The program should
//store the counts in an array and display the results.



#include<stdio.h>
#include<string.h>


    struct charact
    {
      int i;
       char sentence[30] ;
        int count;
      
    };
    int main()
{

    char line[150];
  int vowels;
  int consonant;

 
  vowels = consonant = 0;
  
 
  printf("Enter a line of string: ");
  fgets(line, sizeof(line), stdin);

int i;
  for (int i = 0; line[i] != '\0'; ++i) 

    
    line[i] = (line[i]);

    
    if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
        line[i] == 'o' || line[i] == 'u')
      {
          ++vowels;
      }

   


    
    
    else if ((line[i] >= 'a' && line[i] <= 'z')) 
    {
      ++consonant;
    }

    
    else if (line[i] >= '0' && line[i] <= '9') 
     
    {
          printf("\nVowels: %d", vowels);
          printf("\nConsonants: %d", consonant);
          scanf ("%d",vowels);
          scanf("%d",consonant);
    }
  
  return 0;
}
