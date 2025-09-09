#include <stdio.h>
int main() {
    double A, B, C;
    const double pi = 3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);
    double triangle = (A * C) / 2.0;
    double circle = pi * C * C;
    double trapezium = ((A + B) * C) / 2.0;
    double square = B * B;
    double rectangle = A * B;

    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",
           triangle, circle, trapezium, square, rectangle);
    return 0;
}
