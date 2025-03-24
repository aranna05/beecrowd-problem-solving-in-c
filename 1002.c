#include <stdio.h>
#define pi 3.14159

int main() {
    double R, ans;
    scanf("%lf", &R); 
    ans = pi * R * R;
    printf("A=%.4lf\n", ans); 
    return 0;
}
