#include <stdio.h>
int main() {
    int Bs;
    printf("Enter Basic Salary: ");
    scanf("%d", &Bs);

    int Hra = Bs * 30 / 100;
    int Da = Bs * 20 / 100;
    int It = Bs * 10 / 100;
    int Lr = 10000;
    int Inc = 7000;

    int grossSalary = Bs + Hra + Da + Inc;
    int netSalary = grossSalary - Lr - It;

    printf("Gross Salary is: %d\n", grossSalary);
    printf("Net Salary is: %d\n", netSalary);

    return 0;
}
