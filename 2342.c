#include <stdio.h>

int main() {
    unsigned int N, P, Q;
    char C;
    scanf("%u", &N);
    scanf("%u %c %u", &P, &C, &Q);
    if (C == '+') {
        if (P + Q > N) {
            printf("OVERFLOW\n");
        } else {
            printf("OK\n");
        }
    } else if (C == '*') {
        if (P > 0 && Q > 0 && P > N / Q) { 
            printf("OVERFLOW\n");
        } else {
            printf("OK\n");
        }
    }
    
    return 0;
}
