#include<stdio.h>

int main()
{
    char ch;
    int count = 0;
    while(scanf("%c",&ch)!=-1) count++;
    printf("%d",count);
    
    return 0;
}