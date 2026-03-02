// Find the largest of 3 numbers
#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter second  Number: ");
    scanf("%d", &b);
    printf("Enter Third Number: ");
    scanf("%d", &c);
    if(a >= b && a >= c){
        printf("%d is the largest number.\n", a);

    }
    else if(b >= a  &&  b >= c){
        printf("%d is the largest number.\n", b);

    }
    else {
        printf("%d is the largest number.\n", c);
        }
    return 0;
}
