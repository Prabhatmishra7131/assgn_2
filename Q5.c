#include<stdio.h>
int main()
{
    int num;
    int sum=0,rem=0;
    printf("Enter the 3 digit number:");
    scanf("%d",&num);
    rem=num%10;
    num=num/10;
    sum=sum+rem;
    rem=num%10;
    num=num/10;
    sum=sum+rem;
    rem=num%10;
    num=num/10;
    sum=sum+rem;
    printf("Sum of the digits is %d\n",sum);
    return 0;
}