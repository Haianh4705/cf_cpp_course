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
        int l=-1, r=n, m;
        while (l+1<r) {
            m = (l+r)/2;
            if (a[m] < tmp) {
                l = m;
            } else {
                r = m;
            }
        }
        cout<<r+1<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    solve();

    return 0;
}
