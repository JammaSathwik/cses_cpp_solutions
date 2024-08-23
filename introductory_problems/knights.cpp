#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define rep(i, m, n) for (ll i = (m); i < (n); ++i)
#define rem 1000000007

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    rep(i,1,n+1) {
        cout<<i*i*(i-1)*(i+1)/2-4*(i-1)*(i-2)<<"\n";
    }
    return 0;
}