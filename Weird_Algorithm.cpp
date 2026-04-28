#include <bits/stdc++.h>
using namespace std;

void f(long long n, vector<long long>& ans){
    ans.push_back(n);
    if(n == 1){
        return;
    }
    else if(n & 1){
        f(n*3+1,ans);
    }
    else{
        f(n/2,ans);
    }
}

int main(){
    long long n; cin >> n;
    vector<long long> ans;
    f(n,ans);
    for(long long i: ans) cout << i <<' ';
}