#include <stdio.h>
 
int main() {
 
    float salary, new, money_earned;
    int percentage;

    scanf("%f", &salary);
    if (salary<=400.00) {
        percentage = 15;
    }
    else if (salary<=800.00) {
        percentage = 12;
    }
    else if (salary <= 1200.00) {
        percentage = 10;
    }
    else if(salary<=2000.00) {
        percentage = 7;
    } 
    else {
        percentage = 4;
    }
    money_earned = salary * (float) percentage/100;
    new = salary + money_earned;

    printf("Novo salario: %.2f\n", new);
    printf("Reajuste ganho: %.2f\n", money_earned);
    printf("Em percentual: %d %%\n", percentage);
    
    return 0;
}
