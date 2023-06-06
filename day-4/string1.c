#include<stdio.h>
#include<string.h>
int main()
{

    char str1[30]="hello";
    char str2[30];
    char str3[30];
    char str4[20];char str5[20];
    strcpy(str2, str1);
    printf("str2 = %s\n", str2);
    strcpy(str3, str1);
    strcat(str3, "Infotech");
    printf("str3 = %s\n", str3);

getchar();
}