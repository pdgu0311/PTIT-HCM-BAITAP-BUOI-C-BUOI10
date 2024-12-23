#include<stdio.h>

int main(){
    int arr[] = {2,5,3,1,6,4};
    int size = sizeof(arr)/sizeof(int);
    
    printf("mang chua sap xep: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

     
    for(int i = 0;i < size;i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Mang da sap xep: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}