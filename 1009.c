#include <stdio.h>
#include <string.h>

int main(){

    char name[20];
    double sales, salary, total=0;

    gets (name);
    scanf ("%lf%lf", &salary, &sales);
    total = (salary + ((double)15/(double)100*sales));

    printf ("TOTAL = R$ %.2lf\n",total);
    return 0;
}
