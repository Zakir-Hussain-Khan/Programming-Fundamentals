// 4. Check whether a year is a leap year
#include <stdio.h>

int main() {
    int num;

    printf("Enter a year: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input! Please enter a numeric value.");
        return 1;
    }

    if ((num % 4 == 0 && num % 100 != 0) || (num % 400 == 0)) {
        printf("%d is a Leap Year", num);
    } else {
        printf("%d is not a Leap Year", num);
    }

    return 0;
}
