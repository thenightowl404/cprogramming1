#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int time=0;
    if(a==b)
    time=24;
    else if(a>b)
    time=24-a+b;
    else if(a<b)
    time=b-a;
    cout << "O JOGO DUROU " <<time<< " HORA(S)" << endl;
return 0;
}

