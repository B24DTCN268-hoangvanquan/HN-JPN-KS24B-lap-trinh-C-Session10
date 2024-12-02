#include <stdio.h>
int main(){
    int n,i,j,minIndex,temp;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d",&n);
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for(i=0;i<n;i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        minIndex=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        if(minIndex!=i){
            temp=arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex]=temp;
        }
    }
    printf("Mang sau khi sap xep theo thu tu tang dan:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

