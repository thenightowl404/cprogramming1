#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    cout << n << endl;
    
    int amount = n;
    int notes100 = 0, notes50 = 0, notes20 = 0, notes10 = 0, notes5 = 0, notes2 = 0, notes1 = 0;
    
    while (amount > 0) {
        if (amount >= 100) {
            notes100++;
            amount -= 100;
        }
        else if (amount >= 50) {
            notes50++;
            amount -= 50;
        }
        else if (amount >= 20) 
        {
            notes20++;
            amount -= 20;
        }
        else if (amount >= 10) 
        {
            notes10++;
            amount -= 10;
        }
        else if (amount >= 5) {
            notes5++;
            amount -= 5;}
        else if (amount >= 2) {
            notes2++;
            amount -= 2;
        }
        else {
            notes1++;
            amount -= 1;
        }
    }
    
    cout << notes100 << " nota(s) de R$ 100,00" << endl;
    cout << notes50 << " nota(s) de R$ 50,00" << endl;
    cout << notes20 << " nota(s) de R$ 20,00" << endl;
    cout << notes10 << " nota(s) de R$ 10,00" << endl;
    cout << notes5 << " nota(s) de R$ 5,00" << endl;
    cout << notes2 << " nota(s) de R$ 2,00" << endl;
    cout << notes1 << " nota(s) de R$ 1,00" << endl;
    
    return 0;
}