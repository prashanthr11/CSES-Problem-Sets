#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    char t = 'A';
    int maxi = 0, cnt = 0;
    for(auto i:s) {
        if(t == i) {
            cnt++;
            maxi = max(maxi, cnt);
        }
        else {
            t = i;
            cnt = 1;
        }
    }
    cout << maxi << endl;
    return 0;
}