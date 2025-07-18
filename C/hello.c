#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    int square = x * x;
    printf("Square of %d is %d\n", x, square);

    // Pause to prevent console from closing
    printf("Press Enter to exit...");
    getchar(); // To consume leftover newline
    getchar(); // To wait for actual Enter

    return 0;
}
