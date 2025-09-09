#include <bits/stdc++.h>
using namespace std;
int main(){

    double a,b,c;
    cin>>a>>b>>c;
    if(a==0)
    {
      cout<<"Impossivel calcular" <<endl;
      return 0;
    }
    if(b*b - 4*a*c <= 0)
    {
        cout<<"Impossivel calcular" <<endl;
    }
    else{
        double r1=(-b+sqrt(b*b - 4*a*c ))/(2*a);
         double r2=(-b-sqrt(b*b - 4*a*c ))/(2*a);
         cout << fixed << setprecision(5);
         cout<<"R1 = "<<r1<<endl;
         cout<<"R2 = "<<r2<<endl;
         
    }
   return 0;
}