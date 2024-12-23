#include<stdio.h>

int main() {
    int arr[] = {8, 3, 2, 5, 6};
    int n = sizeof(arr) / sizeof(int);

    printf("mang truoc khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        int min_idx = i; 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    printf("\nmang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int x;
    printf("\nNhap mot so nguyen can tim: ");
    scanf("%d", &x);

    int left = 0, right = n - 1, found = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            found = mid;
            break;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (found != -1) {
        printf("Phan tu %d duoc tim thay o vi tri %d.\n", x, found);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", x);
    }

    return 0;
}