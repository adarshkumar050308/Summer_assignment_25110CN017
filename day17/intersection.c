#include<stdio.h>
int main() {
    int n1, n2;
    printf("Enter the number of elements in the first array:");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements of the first array:");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array:");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elements of the second array:");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Create intersection of arrays
    int intersection_size = (n1 < n2) ? n1 : n2;
    int intersection_arr[intersection_size];
    int intersection_count = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                int already_exists = 0;
                for (int k = 0; k < intersection_count; k++) {
                    if (intersection_arr[k] == arr1[i]) {
                        already_exists = 1;
                        break;
                    }
                }
                if (!already_exists) {
                    intersection_arr[intersection_count++] = arr1[i];
                }
                break;
            }
        }
    }

    if (intersection_count == 0) {
        printf("No intersection elements.\n");
    } else {
        printf("Intersection elements: ");
        for (int i = 0; i < intersection_count; i++) {
            printf("%d ", intersection_arr[i]);
        }
        printf("\n");
    }

    return 0;
}
