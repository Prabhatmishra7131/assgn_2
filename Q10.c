#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    n=n/10;
    n=n*10;
    printf("The modified number is %d",n);
    return 0;
    }