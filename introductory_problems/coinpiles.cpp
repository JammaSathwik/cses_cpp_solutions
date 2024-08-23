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

string solve(ll a,ll b) {
    if(a>2*b || b>2*a) return "NO";
    if(abs(b-2*a)%3!=0) return "NO";
    return "YES";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t,a,b;
    cin>>t;
    while(t--) {
        cin>>a>>b;
        cout<<solve(a,b)<<"\n";
    }
    return 0;
}