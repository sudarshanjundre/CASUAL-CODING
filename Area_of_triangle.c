#include<stdio.h>
void triangle()
{
    int h,b,area;
    printf("enter height and base length of triangle:-");
    scanf("%d%d",&h,&b);
    area=(b*h)/2;
    printf("Area of triangle=%d",area);
}
int main()
{
    triangle();
    return 0;
}
