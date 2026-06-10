#include<stdio.h>
int main(){
    int arr[20];
    int n, i, target,found=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the target number: ");
    scanf("%d", &target);
    for(i=0; i<n; i++){
        if(arr[i] == target){
            found = 1;
            break;
        }
    }
    if(found){
        printf("Target number %d found in the array at position %d.\n", target, i+1);
    } else {
        printf("Target number %d not found in the array.\n", target);
    }
    return 0;
}
