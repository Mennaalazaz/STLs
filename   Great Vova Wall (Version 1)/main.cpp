#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n; cin >> n;
    stack<int> s;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        x=x%2;
        if(!s.empty() && s.top()==x) s.pop();
        else s.push(x);
    }
    if(s.size()<=1) cout << "YES";
    else cout << "NO";
}

int main() {
    fastIO();
    solve();
    return 0;
}

