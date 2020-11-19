#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

  
signed main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    int n, m, x, y;
    cin >> n >> m;
    
    vector<int> a(n), pre(n + 1);
    
    for(auto i = 0; i < n; ++i) {
        cin >> a[i];
        pre[i + 1] = pre[i] + a[i];
    }
        
    for(auto j = 0; j < m; j++) {
        cin >> x >> y;
        cout << pre[y] - pre[x - 1] << endl;
    }
}    
