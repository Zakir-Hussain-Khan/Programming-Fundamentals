// Count even and odd numbers in array

#include <stdio.h>

int main() {
    int arr[100], n;
    int even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);


    if(n > 100){
        printf("Maximum 100 elements allowed\n");
        return 0;
    }

    printf("Enter %d numbers:\n", n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}
