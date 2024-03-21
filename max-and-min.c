#include <stdio.h>

// Function to find the maximum and minimum elements in an array
void findMaxAndMin(int arr[], int low, int high, int *max, int *min) {
    int mid, max1, max2, min1, min2;

    // If there is only one element in the array
    if (low == high) {
        *max = arr[low];
        *min = arr[low];
    }
    // If there are two elements in the array
    else if (low == high - 1) {
        if (arr[low] < arr[high]) {
            *max = arr[high];
            *min = arr[low];
        } else {
            *max = arr[low];
            *min = arr[high];
        }
    }
    // If there are more than two elements in the array
    else {
        mid = (low + high) / 2;
        findMaxAndMin(arr, low, mid, &max1, &min1);
        findMaxAndMin(arr, mid + 1, high, &max2, &min2);

        if (max1 > max2)
            *max = max1;
        else
            *max = max2;

        if (min1 < min2)
            *min = min1;
        else
            *min = min2;
    }
}

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max, min;
    findMaxAndMin(arr, 0, n - 1, &max, &min);

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
