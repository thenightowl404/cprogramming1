#include <stdio.h>
 
int main() {
 int time, speed;
    scanf("%d", &time);
    scanf("%d", &speed);

    int distance = time * speed;
    float fuel = distance / 12.0;

    printf("%.3f\n", fuel);
    return 0;
}