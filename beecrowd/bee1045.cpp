#include<bits/stdc++.h>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double sides[3] = {a, b, c};
    sort(sides, sides + 3, greater<double>());
    a = sides[0];
    b = sides[1];
    c = sides[2];
    if (a >= b + c) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } 
    else {
        double a2 = a * a;
        double b2 = b * b;
        double c2 = c * c;
        double sum = b2 + c2;

        if (a2 == sum) {
            cout << "TRIANGULO RETANGULO" << endl;
        } 
        else if (a2 > sum) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        } 
        else {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (a == b && b == c) {
            cout << "TRIANGULO EQUILATERO" << endl;
        } 
        else if (a == b || a == c || b == c) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}