#include <stdio.h>
int main()
{
    int num, count = 0, result = 0;
    printf("Enter the number:");
    scanf("%d",&num);
    
    while (num != 0)
    {   result = num&1;
    count++;
        if (result == 1)
        {
            printf("The position of LSB is %d", count);
            break;
        }
        num = num >> 1;
    }

    return 0;
}
