#include <stdio.h>
int main() {
    int code, quantity;
    float price, total = 0.0;
    for (int i = 0; i < 2; i++) {
        scanf("%d %d %f", &code, &quantity, &price);
        total = total + (quantity * price);
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}
