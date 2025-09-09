#include<bits/stdc++.h>
using namespace std;
int main() {
    int sh, sm, eh, em;
    cin >> sh >> sm >> eh >> em;
    int hours, minutes;
    if (em < sm) {
        minutes = em + 60 - sm;
        eh--;
    } 
    else {
        minutes = em - sm;
    }
    if (eh < sh) {
        hours = eh + 24 - sh;
    } 
    else {
        hours = eh - sh;
    }
    if (hours == 0 && minutes == 0) {
        hours = 24;
    }
    cout << "O JOGO DUROU " << hours << " HORA(S) E " << minutes << " MINUTO(S)" << endl;
    return 0;
}