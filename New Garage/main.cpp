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
    vector<int> a(n);
    for (int i = 0; i < n; i++) { cin >> a[i];}

    stack<int> st;
    int pos = 0; // to track the index of current car that must leave
    for (int i = 1; i <= n; i++) {
        st.push(i);

        while (!st.empty() && st.top() == a[pos]) {
            st.pop();
            pos++;
        }

        // case  : car cannot leave the garage if there is a car that entered after it still in the garage.
        // if car 4 is still in garage and the current car that must leave is 1
        if (!st.empty() && st.top() > a[pos]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";

}

int main() {
    fastIO();
    solve();
    return 0;
}
