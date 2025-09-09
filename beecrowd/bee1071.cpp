#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int sum=0;
if (a==b) {
        if(a%2 != 0) {
            sum = a;
        }
    }
if(a>b){
    for(int i=b; i<a;i++)
    if(i%2!=0)
    {
       sum+=i; 
    }
    
}
else if(b>a){
    for(int i=a; i<b;i++)
    if(i%2!=0)
    {
        sum+=i;
    }
    
}
cout<<sum<<endl;
return 0;
}

