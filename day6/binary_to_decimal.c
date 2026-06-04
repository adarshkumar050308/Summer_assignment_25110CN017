#include <stdio.h>
#include<math.h>
int main (){
    int c,count=0,sum=0;
    long long n,x;
    printf("Enter a binary number:");
    scanf("%lld",&n);
        x=n;
       while(x!=0){
        c=x%10;
        sum=sum+c*pow(2,count);
        ++count;
        x=x/10;

       }
     printf("%lld in binary is %d in decimal",n,sum);
    return 0;
    
}
