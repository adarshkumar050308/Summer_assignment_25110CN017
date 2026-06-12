#include<stdio.h>
int main() {
    int arr[20];
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int missing_number = -1;
    for (int i=1; i<=n; i++){
        int found = 0;
        for (int j=0; j<n; j++){
            if (arr[j] == i) {
                found = 1;
                break;
            }
        }
        if (!found) {
            missing_number = i;
            break;
        }
    }
    if (missing_number != -1) {
        printf("The missing number is: %d\n", missing_number);
    } else {
        printf("No missing number found.\n");
    }
    return 0;
}
