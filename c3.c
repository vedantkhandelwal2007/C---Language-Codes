#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);
   
    printf("Enter second number: ");
    scanf("%d", &b);

    for(int i=a; i<=b; i++)
     {
        if (i%2!=0) {
            printf("%d \n ",i);
        }
    }

    return 0;
}
