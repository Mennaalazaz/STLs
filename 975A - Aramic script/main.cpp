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
    set<string> st;
    while(n--) {
        string s; cin>>s;
        sort(s.begin(), s.end()); //sort
        s.erase(unique(s.begin(), s.end()), s.end()); //make it contains unique characters
        st.insert(s);
    }
    cout<<st.size()<<endl;

}



int main() {
    fastIO();
    solve();
    return 0;
}
