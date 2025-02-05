#include "kakor.h"

long long cookies(int n, int cookies[]){
    long long ans = 0;

    for(int i = 0; i < n; ++i){
        int x = cookies[i];
        ans += x;
    }

    return ans;
}
