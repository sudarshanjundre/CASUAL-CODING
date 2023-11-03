#include<stdio.h>
void R_perimeter()
{
    int l,w,p;
    printf("Enter the length of rectangle:-");
    scanf("%d",&l);
    printf("Enter the width of rectangle:-");
    scanf("%d",&w);
    p=2*(l+w);
    printf("Perimeter of rectangle =%d",p);
}
int main()
{
    R_perimeter();
    return 0;
}
