#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<long long> arr(n);
    long long ans = 0;
    cin >> arr[0];
    for(int i = 1; i < n ; i++){
        cin >> arr[i];
        if(arr[i] < arr[i-1]){
            ans += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }
    cout << ans;
}