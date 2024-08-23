#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ll n;
    cin>>n;
    while(n!=1 && n>0) {
        cout<<n<<" ";
        n=n%2==1?3*n+1:n/2;
    }
    cout<<1;
    return 0;
}
