#include<stdio.h>
void rectangle()
{
    int l,b,area;
    printf("Enter the value of length and breath:-");
    scanf("%d%d",&l,&b);
    area=l*b;
    printf("Area of rectangle =%d",area);
}
int main()
{
    rectangle();
    return 0;
}
