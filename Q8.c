#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if ((n&1)==0)
    {
        printf("Entered no is even\n");
    }
    else
    printf("Entered no is odd\n");
    return 0;
}