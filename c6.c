#include<stdio.h>
int main()
{
    int first;
    printf("Enter the First Number ");
    scanf("%d",&first);
    
    int second;
    printf("Enter the Second Number ");
    scanf("%d",&second);
    
    int third;
    printf("Enter the Third Number ");
    scanf("%d",&third);
    
    int fourth;
    printf("Enter the Fourth Number ");
    scanf("%d",&fourth);
    
    if (first>second && first>third && first>fourth)
        {printf("The Greatest Number is %d", first);}
        
    else if (second>first && second>third && second>fourth)
        {printf("The Greatest Number is %d", second);}
        
    else if (third>second && third>first && first>fourth)
        {printf("The Greatest Number is %d", third);}
        
    else if (fourth>second && fourth>third && fourth>first)
        {printf("The Greatest Number is %d", fourth);}
    else {
        printf("error");
    }
    
    return 0;
}
