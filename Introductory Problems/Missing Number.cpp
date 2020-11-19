
#include <bits/stdc++.h>
# define int long long
using namespace std;
 
signed main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i)  cin >> a[i];
    sort(a.begin(), a.end());
    for(int i = 1; i <= n; ++i) {
        if(a[i] != i) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
