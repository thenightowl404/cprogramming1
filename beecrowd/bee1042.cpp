#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[3];
    int sorted[3];
    for(int i=0;i<3;i++)
    {
       cin>>ar[i];
       sorted[i]=ar[i];
    }
    sort(sorted,sorted+3);
    for(int i=0;i<3;i++)
    {
      cout<<sorted[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++)
    {
       cout<<ar[i]<<endl;
    }
    return 0;
}