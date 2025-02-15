#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> ships(n);

    for (int i = 0; i < n; i++) {
        cin >> ships[i].first >> ships[i].second;
    }

    // Sort ship ranges by start position
    sort(ships.begin(), ships.end());

    // Merge overlapping intervals
    vector<pair<int, int>> merged;
    merged.push_back(ships[0]); // Add the first interval

    for (int i = 1; i < n; i++) {
        int L = ships[i].first, R = ships[i].second;

        if (merged.back().second < L) {
            // No overlap, add a new interval
            merged.push_back({L, R});
        } else {
            // Overlapping intervals, merge
            merged.back().second = max(merged.back().second, R);
        }
    }


    // Handle queries
    int q;
    cin >> q;
    while (q--) {
        int u, v;
        cin >> u >> v;
        if (u > v) swap(u, v); // Ensure u ≤ v

        // Use binary search to find the first interval that could cover `u`
        auto it = lower_bound(merged.begin(), merged.end(), pair<int, int>(u, 0));

        bool possible = false;
        if (it != merged.begin() && it->first != u) {
            --it; // Move to the correct interval (if applicable)
        }

        // Check if `u` and `v` lie within the found interval
        if (it != merged.end() && it->first <= u && it->second >= v) {
            possible = true;
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }
}

int main() {
    fastIO();
    solve();
    return 0;
}
