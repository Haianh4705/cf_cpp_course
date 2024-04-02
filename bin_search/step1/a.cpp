#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

void solve() {
    int n, k; cin>>n>>k;
    int a[n];
    for (int i = 0; i<n; i++) {
        cin>>a[i];
    }
    for (int i = 0; i<k; i++) {
        int tmp; cin>>tmp;
        int l = 0, r = n-1, m;
        bool flag = false;
        while (l<=r) {
            m = (l+r)/2;
            if (a[m] == tmp) {
                flag = true;
                break;
            } else if (a[m] < tmp) {
                l = m+1;
            } else {
                r = m-1;
            }
        }
        if (flag) {
            cout<<"YES\n";
        } else cout<<"NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    solve();

    return 0;
}
