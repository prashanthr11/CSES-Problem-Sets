#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    int n;
    cin >> n;
    int ans = 0, maxi = 0;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        maxi = max(maxi, x);
        ans += maxi - x;
    }
    cout << ans;
}