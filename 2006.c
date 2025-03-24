#include <stdio.h>
 
int main() {
 
    int count = 0, t, a, b, c, d, e;
    while(scanf("%d", &t)!=EOF) {
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        if (t == a) count++;
        if (t == b) count++;
        if (t == c) count++;
        if (t == d) count++;
        if (t == e) count++;
        printf("%d\n", count);
    }
    
 
    return 0;
}
