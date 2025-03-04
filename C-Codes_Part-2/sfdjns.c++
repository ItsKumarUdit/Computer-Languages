 #include <iostream>
#include <unordered_map>
using namespace std;

void solve() {
    int num;
    cin >> num;
    unordered_map<int, int> mp;
    int ans = 0;
    for (int i = 0; i < num; i++) {
        int x;
        cin >> x;
        if (x == 2) {
            ans += mp[6];
        } else if (x == 4) {
            ans += mp[4];
        }
        for (auto &[key, value] : mp) {
            int target = key * 2;
            if (target >= 1 && target <= 1000000) {
                ans += value * mp[target];
            }
        }
        mp[x]++;
    }
    cout << ans << endl;
}

int main() {
    int test_case;
    scanf("%d", &test_case);
    while (test_case--) {
        solve();
    }
    return 0;
}

