#include<stdio.h>
int main() {
    int arr[20];
    int frequency[20] = {0};
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n; i++){
        frequency[arr[i]]++;
    }
    int max_freq = 0;
    int max_num = arr[0];
    for (int i=0; i<n; i++){
        if (frequency[arr[i]] > max_freq) {
            max_freq = frequency[arr[i]];
            max_num = arr[i];
        }
    }
    printf("The number with the highest frequency is: %d with frequency: %d\n", max_num, max_freq);
    return 0;
}
