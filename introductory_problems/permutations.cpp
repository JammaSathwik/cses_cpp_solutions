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
    ll n;
    cin>>n;
    if(n==2 || n==3) cout<<"NO SOLUTION";
    else {
        rep(i,2,n+1) {
            cout<<i<<" ";
            ++i;
        }
        rep(i,1,n+1) {
            cout<<i<<" ";
            ++i;
        }
    }
    return 0;
}