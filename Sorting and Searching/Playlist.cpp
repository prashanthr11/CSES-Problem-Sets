#include <bits/stdc++.h>
# define int long long

using namespace std;


int solve(vector<int> &a, int n) {
    set<int> s;
    int j = 0, i = 0, maxi = 0;
    
    while(1) {
        while(i < n && s.find(a[i]) == s.end()) {
            s.insert(a[i]);
            ++i;
        }
        int tmp = s.size();
        maxi = max(maxi, tmp);
        
        if(i == n)
            return maxi;
            
        while(s.size() && s.find(a[i]) != s.end()) {
            s.erase(a[j]);
            ++j;
        }
    }
    
    int tmp = s.size();
    return max(maxi, tmp);
}



signed main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i)
        cin >> a[i];
        
    cout << solve(a, n) << endl;
}