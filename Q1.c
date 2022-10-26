#include <stdio.h>
int main()
{
    int x;
    printf("Enter the no\n");
    scanf("%d", &x);
    printf("The unit digit of %d is %d\n", x, x % 10);
    return 0;
}
