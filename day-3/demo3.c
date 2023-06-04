#include<stdio.h>


    enum week{ mon,tue,wed,thu,fri,sat,sun};
    int main()
{
    enum week day;
    day = wed;
    printf("%d",day);
    return 0;
}
