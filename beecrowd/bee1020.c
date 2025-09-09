#include <stdio.h>
 
int main() {
 int days, years, months, days_left;

    scanf("%d", &days);

    years = days / 365;
    days = days % 365;

    months = days / 30;
    days_left = days % 30;

    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days_left);
    return 0;
}