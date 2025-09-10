#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int in=0;
   int out=0;
   while(n--){
    int a;
    cin>>a;
    if(a>=10 && a<=20){
        in++;
    } 
    else
    out++;

   }
    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;
    return 0;
}