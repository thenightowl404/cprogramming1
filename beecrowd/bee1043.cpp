#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    cout<<fixed<<setprecision(1);
    if(a+b>c && a+c>b && b+c>a)
    cout<<"Perimetro = "<<a+b+c<<endl;
    else
    cout<<"Area = "<<0.5*(a+b)*c<<endl;
    return 0;
}