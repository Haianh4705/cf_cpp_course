#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

void solve() {
    int n; cin>>n;
    int a[n];
    for (int i = 0; i<n; i++) {
        cin>>a[i];
    }
    sort(a, a+n);
    int k; cin>>k;
    for (int i = 0; i<k; i++) {
        int x, y; cin>>x>>y;
        int tmp_l = -1, tmp_r = n;
        while (tmp_l+1 < tmp_r) {
            int m = (tmp_l+tmp_r)/2;
            if (a[m] < x) {
                tmp_l = m;
            } else {
                tmp_r = m;
            }
        }
        int l = tmp_l+1;
        tmp_l = -1, tmp_r = n;
        while (tmp_l+1 < tmp_r) {
            int m = (tmp_l+tmp_r)/2;
            if (a[m] <= y) {
                tmp_l = m;
            } else {
                tmp_r = m;
            }
        }
        int r = tmp_r+1;
        int num = r-l-1;
        cout<<num<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    solve();

    return 0;
}
