#include <stdio.h>

int main(){

    int A, B, C, D, min;
    scanf("%d%d%d%d", &A, &B, &C, &D);
    min = ((A*B)-(C*D));
   
    printf("DIFERENCA = %d\n", min);

    return 0;
}
