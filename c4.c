#include <stdio.h>
int main()
{
    int l, b;
    printf("enter the length of rectangle: ");
    scanf("%d", &l);
    printf("enter the breadth of rectangle: ");
    scanf("%d", &b);
    int area = l * b;
    int perimeter = 2 * (l + b);
    printf("the area of rectangle is %d\n", area);
    printf("the perimeter of rectangle is %d\n", perimeter);
    return 0;
}
