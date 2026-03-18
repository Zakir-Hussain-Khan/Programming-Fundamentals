// Print Fibonacci series 

#include <stdio.h>

int main() {
    int n;
    int first = 0, second = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.");
    } 
    else {
        printf("Fibonacci Series: ");

        for (int i = 1; i <= n; i++) {
            printf("%d ", first);
            next = first + second;
            first = second;
            second = next;          
        }                         
    }                         

    return 0;
}
