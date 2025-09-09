#include<bits/stdc++.h>
using namespace std;
int main(){
    double ar[6];
    int count=0;
    double sum=0;
    for(int i=0;i<6;i++){
        cin>>ar[i];
    }
     for(int i=0;i<6;i++){
        if(ar[i]>0){
          count++;
        sum+=ar[i];  
        } 
    }
    cout<<count<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1);
    cout<<sum/count<<endl;


    return 0;
}