#include <stdio.h>
#include <math.h>

int arm(int x); 

int main() {
    int x,y;
    int i;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    for(i=x;i<=y;i++){
        if(arm(i)==1){
            printf("%d ",i);
        }
    }
    printf("Not have any armstrong in this range!!!");
    arm(x);
    return 0;
}

int arm(int x) {
    int sum = 0;
    int original = x;
    int count = 0;
    int rem;

    // Calculate the number of digits
    int temp = x;
    while (temp > 0) {
        count++;
        temp = temp / 10;
    }

    // Calculate the sum of the digits raised to the power of 'count'
    temp = x;  // Reset temp to the original value of x
    while (temp > 0) {
        rem = temp % 10;
        sum += pow(rem, count);
        temp = temp / 10;
    }
    if (sum == x) {  // Compare the sum with the original number 'x'
        // printf("Armstrong Number\n");
        return 1;
    } else {
        return 0;
    }
}
