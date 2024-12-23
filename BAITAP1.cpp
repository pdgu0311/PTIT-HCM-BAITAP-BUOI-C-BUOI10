#include <stdio.h>

int main(){
	int arr[] = {2,6,5,3,1,8,4};
	int size = sizeof(arr)/sizeof(int);
	int n,i,found = 0;
	
	printf("nhap gia tri can tim");
	scanf("%d",&n);
	
	for(int i = 0; i < size; i++){
		if(arr[i] ==  n){
			printf("Gia tri %d ton tai tai vi tri %d (chi so %d)\n", n, i + 1, i);
			found = 1;
			break;
		}
	}
	if(found == 0){
		printf("Gia tri %d khong ton tai trong mang\n", n);
	}  
	return 0;
}
