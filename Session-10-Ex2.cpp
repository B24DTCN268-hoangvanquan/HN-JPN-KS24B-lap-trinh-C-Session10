#include <stdio.h>
int main(){
    int n,i,j,temp;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d",&n);
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for(i=0;i<n;i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Mang sau khi sap xep theo thu tu tang dan:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

