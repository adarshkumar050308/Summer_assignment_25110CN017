#include<stdio.h>
int main() {
    int a, b,a1,b1, temp,lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    a1=a;
    b1=b;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    
 lcm=(a1*b1)/a;
 printf("lcm is %d\n",lcm);
    
    return 0;
}
