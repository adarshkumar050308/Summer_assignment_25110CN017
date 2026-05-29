#include<stdio.h>
int main(){
    int n,original,reverse=0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    original=n;
    while(n!=0){
        reverse=reverse*10+n%10;
        n/=10;
    }
    if(original==reverse){
        printf("The entered number is a palindrome.\n");
    }
    else{
        printf("The entered number is not a palindrome.\n");
    }
    return 0;
}
