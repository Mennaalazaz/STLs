#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define intCeil(a,b) (ll(a)+ll(b-1))/ll(b)

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n; cin>>n;
    map<string,string> m;
    string neww ; string old;
    while(n--) {
        cin>>old>>neww;

        if(m.find(old) != m.end()) {
            m[neww]=m[old];
        }
        else {
            m[neww]=old;
        }

        m.erase(old);
    }
    cout<<m.size()<<endl;
    for(auto i:m) {
        cout<<i.second<<" "<<i.first<<endl;
    }

}



int main() {
    fastIO();
    solve();
    return 0;
}
