#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==0)
        cout<<0;
        while(n>0){
            int remainder=n%10;
            cout<<" "<<remainder;
            n/=10;
        }
        cout<<endl;
    }
    return 0;
}