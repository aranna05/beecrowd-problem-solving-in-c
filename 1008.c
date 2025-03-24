#include <stdio.h>

int main(){

    int num, hour;
    double amount, salary=0;

    scanf("%d%d%lf", &num, &hour, &amount);
    salary=hour*amount;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", salary); 

    return 0;
}
