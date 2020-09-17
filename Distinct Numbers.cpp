#include <bits/stdc++.h>
using namespace std;
 
signed main()
{
    int n;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++)  {
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << endl;
    return 0;
}
