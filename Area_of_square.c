#include<stdio.h>
void square()
{
    int side,area;
    printf("Enter length of side:-");
    scanf("%d",&side);
    area=side*side;
    printf("Area of square =%d",area);
}
int main()
{
    square();
    return 0;
}
