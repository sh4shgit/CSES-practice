#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    
    vector<int> arr(n-1);
    for(int &x : arr) cin >> x;

    int xor_all = 0;
    for(int i = 1; i <= n; i++) xor_all ^= i;

    int xor_arr = 0;
    for(int x : arr) xor_arr ^= x;

    cout << (xor_all ^ xor_arr);
}