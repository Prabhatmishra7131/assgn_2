    #include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the 2 values\n");
    scanf("%d %d",&x,&y);
    printf("x=%d,y=%d",x,y);
    z=x;
    x=y;
    y=z;
    printf("the swapped values are x=%d , y=%d\n",x,y);
    return 0;
}