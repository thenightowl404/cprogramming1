#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int first_digit=n/1000;
    if(first_digit % 2==0)
    cout<<"EVEN"<<endl;
    else 
    cout<<"ODD"<<endl;
    return 0;
}