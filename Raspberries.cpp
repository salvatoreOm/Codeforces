#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int d = INT_MAX;  
    int e_cnt = 0;  
    
    for(int i = 0; i < n; i++){
        if(nums[i] % 2 == 0) e_cnt++;
        if(nums[i] % k == 0) {
            d = 0;  
        } else {
            d = min(d, k - nums[i] % k); 
        }
    }

    if(k != 4){
        cout << d << endl;
    } else {
        if(e_cnt >= 2) {
            cout << 0 << endl;  
        } else if(e_cnt == 1) {
            cout << min(d, 1) << endl;  
        } else {
            cout << min(2, d) << endl;  
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
    return 0;
}
