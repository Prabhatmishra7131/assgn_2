#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the values :\n");
    scanf("%d %d",&x,&y);
    printf("x=%d,y=%d\n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;

    printf("The swapped values are x=%d , y=%d:\n",x,y);
    return 0;
}