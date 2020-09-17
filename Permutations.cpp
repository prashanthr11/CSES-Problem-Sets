#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n == 1) {
        cout << 1 << endl;
        return 0;
    }
    if (n == 2 or n == 3) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    if(n % 2) {
        for(auto i = n; i > 0; i -= 2)
        cout << i << ' ';
        for(auto i = n - 1; i > 0; i -= 2)
        cout << i << ' ';
    }
    else {
        for(auto i = 2; i <= n; i += 2)
        cout << i << ' ';
        for(auto i = 1; i <= n; i += 2)
        cout << i << ' ';
    }
}
