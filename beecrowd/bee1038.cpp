#include <bits/stdc++.h>
using namespace std;
int main(){
   int x,y;
   cin>>x>>y;
   float price=0;
   if(x==1)
   price=4.00;
   else if(x==2)
   price=4.50;
   else if(x==3)
   price=5.00;
   else if(x==4)
   price=2.00;
   else if(x==5)
   price=1.50;
   double total=y*price;
   cout<<fixed<<setprecision(2);
   cout<<"Total: R$ "<<total<<endl;
    return 0;
}