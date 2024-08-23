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
    ll n,j;
    cin>>n;
    vector<ll> v;
    rep(i,0,n) {
        cin>>j;
        v.pb(j);
    }
    ll ans = 0, curr = v[0];
    rep(i,1,n) {
        ans += max((ll)0,curr-v[i]);
        curr = max(curr,v[i]);
    }
    cout<<ans;
    return 0;
}