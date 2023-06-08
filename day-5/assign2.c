// 2. Write a C program that reads the contents of a text file named "input.txt" and writes them into
// another text file named "output.txt" using the fread and fwrite functions. Make sure to handle
// any potential errors that may occur during file operations.


#include <stdio.h> 
 
int main() { 
    FILE *inputFile; 
    FILE *outputFile; 
    char ch; 
 
    // Open input file 
    inputFile = fopen("input.txt", "r"); 
 
    // Check if input file exists 
    if (inputFile == NULL) { 
        printf("Unable to open input file.\n"); 
        return 0; 
    } 
 
    // Open output file 
    outputFile = fopen("output.txt", "w"); 
 
    // Read input file and write to output file 
    while ((ch = fgetc(inputFile)) != EOF) { 
        fputc(ch, outputFile); 
    } 
 
    // Close both files 
    fclose(inputFile); 
    fclose(outputFile); 
 
    return 0; 
} 