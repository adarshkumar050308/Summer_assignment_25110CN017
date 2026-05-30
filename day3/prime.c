#include <stdio.h>
int main(){
    int n,i,c=0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==2){
        printf("The entered number is a prime number.\n");
    }
    else{
        printf("The entered number is not a prime number.\n");
    }
    return 0;
}
