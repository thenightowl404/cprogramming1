#include <stdio.h>
 int main() {
    int N;
    scanf("%d", &N);

    int hours = N / 3600;
    int minutes = (N % 3600) / 60;
    int seconds = (N % 3600) % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);
return 0;
}