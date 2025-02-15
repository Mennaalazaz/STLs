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
    string s; cin >> s;
    string per="BGR"; // must start with 'BGR' to give all six permutations
    string ans="";
    int min_cost=INT_MAX;

    // Generate all permutations of "BGR"
    do {
        int cost=0;
        string complete_pattern="";

        for(int i=0;i<n;i++) {
            complete_pattern+=per[i%3];
        }
        for(int i=0;i<n;i++) {
            if(s[i]!=complete_pattern[i]) {
                cost++;
            }
        }
        // Update the answer if this permutation has a lower cost
        if(cost < min_cost) {
            min_cost = cost;
            ans = complete_pattern;
        }
    }while(next_permutation(per.begin(), per.end()));

    cout << min_cost<<endl<<ans << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
