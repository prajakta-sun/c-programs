
// Create a program in C that simulates a simple library catalog. Use a switch
// case to handle menu options such as adding a book,searching for a book by title or
// author, displaying all books, and removing a book from the catalog. Implement these
// operations using an array of structures where each structure represents a book with
// attributes like title, author, and ISBN


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BOOKS_FILE  "books.db"

struct book {
    int  ISBN;
    char name[40];
    char author_name[20];
    
};

void accept_book(struct book *b) {
    printf("enter ISBN: ");
    scanf("%d%*c", &b->ISBN);
    printf("enter book name: ");
    scanf("%[^\n]", b->name);
    printf("enter author name: ");
    scanf("%[^\n]", b->author_name);
}

void print_book(struct book *b) {
    printf("ISBN = %d\nname = %s\nauthor_name =%s\n", b->ISBN, b->name, b->author_name);
}
//add book
void add_book() {
    FILE *fp;
    struct book b;
    accept_book(&b);
  
    fp = fopen(BOOKS_FILE, "ab");
    if(fp == NULL) {
        perror("fopen() failed");
        exit(1);
    }
    
    fwrite(&b, sizeof(struct book), 1, fp);
    printf("New book saved.\n");
    fclose(fp);
}
//display book
void display_all_books() {
    FILE *fp;
    struct book b;
    fp = fopen(BOOKS_FILE, "rb");
    if(fp == NULL) {
        perror("fopen() failed");
        exit(1);
    }    
    while(fread(&b, sizeof(struct book), 1, fp) > 0) {
        print_book(&b);
    }
    fclose(fp);
}
//find book by name
void find_book_by_name() {
    char name[40];
    FILE *fp;
    struct book b;
    int found = 0;

    printf("enter book name to find: ");
    scanf("%*c%[^\n]", name);
    strupr(name);
    
    fp = fopen(BOOKS_FILE, "rb");
    if(fp == NULL) {
        perror("fopen() failed");
        exit(1);
    }
    
    while( fread(&b, sizeof(struct book), 1, fp) > 0 ) {
        
        strupr(b.name);
        if(strstr(b.name, name) != NULL) {
            found = 1;
            print_book(&b);
        }
    } 
    if(!found)  
        printf("No matching book found.\n");
    
    fclose(fp);
}
    //find book by author
    void find_book_by_author() {
    char name[40];
    FILE *fp;
    struct book b;
    int found = 0;
    
    printf("enter author name to find: ");
    scanf("%*c%[^\n]", name);
    strupr(name);
    // 
    fp = fopen(BOOKS_FILE, "rb");
    if(fp == NULL) {
        perror("fopen() failed");
        exit(1);
    }
    
    while( fread(&b, sizeof(struct book), 1, fp) > 0 ) {
      
        strupr(b.name);
        if(strstr(b.name, name) != NULL) {
            found = 1;
            print_book(&b);
        }
    } 
    if(!found)  
        printf("No matching book found.\n");
    
    fclose(fp);
}

      //delete book
    void delete_book() {
    int id, found = 0;
    FILE *fp, *fd;
    struct book b;
   
    printf("enter id of book to be modified: ");
    scanf("%d%*c", &id);
    
    fp = fopen(BOOKS_FILE, "rb");
    if(fp == NULL) {
        perror("fopen() failed");
        exit(1);
    }
   
    fd = fopen("temp.db", "wb");
    if(fd == NULL) {
        perror("fopen() failed");
        exit(1);
    }
    
    while(fread(&b, sizeof(struct book), 1, fp) > 0) {

        if(b.ISBN != id) {
           
            fwrite(&b, sizeof(struct book), 1, fd);
        }
        else
            found = 1;
    } 
    fclose(fd);
    
    fclose(fp);
    if(!found)
        printf("No book found!\n");
    else
        printf("Book deleted!\n");
    
    remove(BOOKS_FILE);
    
    rename("temp.db", BOOKS_FILE);
}

int main() {
    int choice;
    do {
        printf("\n0. exit\n1. add new book\n2. display all books\n3. find book by name\n4. find book by author\n5. delete book\nenter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                add_book();
                break;
            case 2:
                display_all_books();
                break;
            case 3:
                find_book_by_name();
                break;
            case 4:
                find_book_by_author();
                break;
            case 5:
                delete_book();
                break;
        }
    } while(choice != 0);
    return 0;
}
