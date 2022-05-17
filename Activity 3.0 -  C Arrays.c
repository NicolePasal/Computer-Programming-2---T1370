#include <stdio.h>
int main() {
    int n, i;
    int arr[10], sum = 0.0;

    printf("Enter The Size Of The Array: ");
    scanf("%d", &n);

    while (n > 10 || n < 5) {
        printf("Error! Size of array should range from 5 to 10 only!");
        printf("\nTRY AGAIN!!\nEnter The Size Of The Array:");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("Enter Element %d: ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum Of All Array Elements = %d", sum );
    return 0;
}
