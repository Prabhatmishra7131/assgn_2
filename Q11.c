#include<stdio.h>
int main()
{
    int n,d;
    printf("Enter the number and the digit:");
    scanf("%d %d",&n,&d);
    n=n/10;
    n=(n*10)+d;
    printf("The modified no is:%d\n",n);
    return 0;
}