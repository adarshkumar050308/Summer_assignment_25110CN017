#include<stdio.h>
int main(){
    int i=0,n,c;
    int binary[32];
    printf("Enter a decimal number:");
    scanf("%d",&n);
    while(n!=0){
        c =n%2;
        binary[i]=c;
        n=n/2;
        i++;    
    }
    printf("It's binary equivalent is:\n");
    for (int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }
return 0;
    }
