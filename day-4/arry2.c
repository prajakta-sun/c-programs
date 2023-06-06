#include <stdio.h>

void accept_marks(int marks[]) {
    int i;
    printf("Enter marks of 6 subjects: ");
    for(i=0; i<6; i++)
        scanf("%d", &marks[i]);
}

void print_marks(int mrks[] )
 {
    int i;
    for(i=0; i<6; i++)
        printf("%d, ", mrks[i]);
    printf("\n");
}

int total_marks(int *m) {
    int i, sum = 0;
    for(i=0; i<6; i++)
        sum = sum + *(m + i); 
    return sum;
}

int main() {
    int total, marks[6];
    accept_marks(marks);
    print_marks(marks);
    total = total_marks(marks);
    printf("Total marks: %d\n", total);
    return 0;
}