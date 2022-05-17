#include <stdio.h>
int main() {
    int i;
    float num[5], sum = 0.0, ave;

    printf("Enter Five Numbers/Grades:\n");
    for (i = 0; i < 5; ++i) {
        printf(" ");
        scanf("%f", &num[5]);
        sum += num[5];
    }

    ave = sum / 5;
    printf("Average = %.2f", ave);
    return 0;
}
