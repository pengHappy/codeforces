#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string.h>
#include <math.h>
#include <iostream>
#include <memory>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

typedef long long ll;
const int MAX_N = 2e5 + 5;
int a, b;

int bSearch(int m) {
    int l = 1, r = m, mid;
    while(l < r) {
        mid = (l + r + 1) / 2;
        if(mid * (mid + 1) / 2 > m) {
            r = mid - 1;
        }
        else {
            l = mid;
        }
    }
    return r;
}

int main() {
    scanf("%d %d", &a, &b);
    int x = bSearch(a + b);
    for(int i = x; i >= 1; i--) {
        
    }
    return 0;
}