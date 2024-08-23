#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,j,sum;
    cin>>n;
    sum = n*(n+1)/2;
    while(--n) {
        cin>>j;
        sum -= j;
    }
    cout<<sum;
    return 0;
}