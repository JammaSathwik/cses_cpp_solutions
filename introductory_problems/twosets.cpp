#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ll n,sum,i,curr_sum=0;
    cin>>n;
    string ans = n%4==2 || n%4==1?"NO":"YES";
    if (ans == "NO") {
        cout<<"NO";
        return 0;
    } else {
        cout<<"YES\n";
    }
    sum = (n*(n+1))/4;
    vector<int> first,second;
    for(i=n;i>0;i--) {
        if(curr_sum+i<=sum) {
            first.push_back(i);
            curr_sum += i;
        } 
        else {
            second.push_back(i);
        }
    }
    cout<<first.size()<<"\n";
    for(int val: first) {
        cout<<val<<" ";
    }
    cout<<"\n";
    cout<<second.size()<<"\n";
    for(int val: second) {
        cout<<val<<" ";
    }
}