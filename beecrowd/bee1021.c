#include <bits/stdc++.h>
using namespace std;
int main() 
{
    double n;
    cin >> n;
    int amount = round(n * 100);
    cout << "NOTAS:" << endl;
    int notes100 = 0, notes50 = 0, notes20 = 0, notes10 = 0, notes5 = 0, notes2 = 0;
    while (amount >= 200) 
        { 
        if (amount >= 10000) 
        {
            notes100++;
            amount -= 10000;
        }
        else if (amount >= 5000) 
        {
            notes50++;
            amount -= 5000;
        }
        else if (amount >= 2000) 
        {
            notes20++;
            amount -= 2000;
        }
        else if (amount >= 1000) 
        {
            notes10++;
            amount -= 1000;
        }
        else if (amount >= 500) {
            notes5++;
            amount -= 500;
        }
        else if (amount >= 200) 
        {
            notes2++;
            amount -= 200;
        }
    }
    
    cout << notes100 << " nota(s) de R$ 100.00" << endl;
    cout << notes50 << " nota(s) de R$ 50.00" << endl;
    cout << notes20 << " nota(s) de R$ 20.00" << endl;
    cout << notes10 << " nota(s) de R$ 10.00" << endl;
    cout << notes5 << " nota(s) de R$ 5.00" << endl;
    cout << notes2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    int coins1 = 0, coins50 = 0, coins25 = 0, coins10 = 0, coins5 = 0, coins1cent = 0;
    while (amount > 0) 
    {
        if (amount >= 100) 
        {
            coins1++;
            amount -= 100;
        }
        else if (amount >= 50) 
        {
            coins50++;
            amount -= 50;
        }else if (amount >= 25) 
        {
            coins25++;
            amount -= 25;
        }
        else if (amount >= 10) 
        {
            coins10++;
            amount -= 10;
        }
        else if (amount >= 5) 
        {
            coins5++;
            amount -= 5;
        }
        else {
            coins1cent++;
            amount -= 1;
        }
    }
    
    cout << coins1 << " moeda(s) de R$ 1.00" << endl;
    cout << coins50 << " moeda(s) de R$ 0.50" << endl;
    cout << coins25 << " moeda(s) de R$ 0.25" << endl;
    cout << coins10 << " moeda(s) de R$ 0.10" << endl;
    cout << coins5 << " moeda(s) de R$ 0.05" << endl;
    cout << coins1cent << " moeda(s) de R$ 0.01" << endl;
    
    return 0;
}