#include <bits/stdc++.h>
# define int long long
using namespace std;
 
signed main()
{
    int n;
    cin >> n;
    while(true) {
        cout << n << ' ';
        if(n == 1)break;
        if(n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
}  
