#include<stdio.h>
void Circle()
{
    int r;
    float pie=22/7;
    float area;
    printf("Enter the value of radius:-");
    scanf("%d",&r);
    area=pie*r*r;
    printf("Area of Circle =%f",area);
}
int main()
{
    Circle();
    return 0;
}
