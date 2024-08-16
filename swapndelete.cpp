#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n = s.size();
    int One = count(s.begin(),s.end(),'1');
    int Zero = n - One;
    int i;
    for(i = 0 ; i<n ; i++){
        if(s[i] == '0'){
            if(One>0){
                One--;
            }else{
                break;
            }
        }
        if(s[i] == '1'){
            if(Zero>0){
                Zero--;
            }else{
                break;
            }
        }
    }
    cout<<n-i<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
       solve();
     }
}
