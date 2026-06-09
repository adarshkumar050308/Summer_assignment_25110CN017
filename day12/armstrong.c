#include<stdio.h>
#include<math.h>
int isarmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, 3);
        num /= 10;
    }
    
    return sum == originalNum; 
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isarmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    
    return 0;
}
