#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define rep(i, m, n) for (ll i = (m); i < (n); ++i)
#define rep0(i, n) for (ll i = 0; i < (n); ++i)
#define rem 1000000007

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,ans=1;
    cin>>n;
    rep0(i,n) {
        ans = (ans*2)%rem;
    }
    cout<<ans;
    return 0;
}