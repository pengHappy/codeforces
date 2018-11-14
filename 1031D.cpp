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

const int MAX_N = 2e3 + 1;
const int dir[2][2] = {{1, 0}, {0, 1}};

typedef struct Node {
    int x, y;
    Node(int x, int y) : x(x), y(y) {}
    Node() {}
} Node;

queue<Node> q;
int d1[MAX_N][MAX_N], d2[MAX_N][MAX_N], n, k, x, y;
char a[MAX_N][MAX_N], ans[2 * MAX_N];

int main() {
    scanf("%d %d", &n, &k);
    for(int i = 1; i <= n; i++) {
        scanf("%s", a[i] + 1);
    }
    d1[1][1] = 1;
    d2[1][1] = a[1][1] == 'a';
    q.push(Node(1, 1));
    while(!q.empty()) {
        Node node = q.front();
        q.pop();
        x = node.x;
        y = node.y;
        if(d1[x][y] - d2[x][y] > k && a[x][y] > ans[x + y - 1]) {
            continue;
        }
        
    }
    return 0;
}