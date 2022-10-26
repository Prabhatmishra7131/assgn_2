#include <stdio.h>
int main()
{
    int n, rem;
    printf("Enter the three digit no:");
    scanf("%d", &n);
    rem = n % 10;
    n = n / 10;
    n = (rem * 100) + n;
    
    
    printf("The new no after rotation is:%d\n", n);
    return 0;
}