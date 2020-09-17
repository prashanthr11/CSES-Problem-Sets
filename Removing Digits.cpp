#include <bits/stdc++.h>

using namespace std;

int getmax(int n) {
    int ret = 0;
    while(n) {
        ret = max(n % 10, ret);
        n /= 10;
    }
    return ret;
}


int solve(int n) {
    int cnt = 0;
    while(1) {
        if(n == 0)
            return cnt;    
        else {
            cnt++;
            int maxi = getmax(n);
            n -= maxi;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    cout << solve(n) << endl;
}
