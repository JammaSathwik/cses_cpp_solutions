#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define rep(i, m, n) for (int i = (m); i < (n); ++i)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t,x,y;
    cin>>t;
    while(t--) {
        cin>>x>>y;
        ll diag = max(x,y);
        ll ans = diag*(diag-1)+1;
        if(diag==y)
            ans += (diag%2==0?-1:1)*(diag-x);
        else 
            ans -= (diag%2==0?-1:1)*(diag-y);
        cout<<ans<<"\n";
    }
    return 0;
}