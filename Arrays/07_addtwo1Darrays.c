#include <stdio.h>

int main() {
    int arr1[] = {1,2,3,4};
    int arr2[] = {5,6,7,8};
    int result[4];

    for(int i = 0; i < 4; i++){
        result[i] = arr1[i] + arr2[i];
    }

    printf("Result array:\n");
    for(int i = 0; i < 4; i++){
        printf("%d ", result[i]);
    }

    return 0;
}
