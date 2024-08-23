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
    string n;
    cin>>n;
    ll curr=1,ans=1,sz=n.length();
    rep(i,1,sz) {
        if(n[i]==n[i-1]) curr++;
        else curr = 1;
        ans = max(ans,curr);
    } 
    cout<<ans;

    return 0;
}