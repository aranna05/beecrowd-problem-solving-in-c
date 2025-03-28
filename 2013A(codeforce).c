#include <stdio.h>
 
typedef long long ll;
 
ll max(ll a, ll b) {
    return (a > b) ? a : b;
}
 
int main() {
    ll t;
    scanf("%lld", &t);
    
    while (t--) {
        ll fruits, sizeBlender, blendCapacity, totalFillTime, totalBlendTime;
        scanf("%lld %lld %lld", &fruits, &sizeBlender, &blendCapacity);
        
        totalFillTime = (fruits + sizeBlender - 1) / sizeBlender;
        totalBlendTime = (fruits + blendCapacity - 1) / blendCapacity;
 
        printf("%lld\n", max(totalFillTime, totalBlendTime));
    }
    
    return 0;
}
