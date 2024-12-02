#include <stdio.h>
int main(){
    int n,i,x;
    int found=-1;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d",&n);
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for(i=0;i<n;i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Nhap phan tu can tim: ");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(arr[i]==x){
            found=i;
            break;
        }
    }
    if(found!=-1){
        printf("Phan tu %d duoc tim thay tai vi tri %d.\n",x,found);
    }else{
        printf("Phan tu %d không ton tai trong mang.\n",x);
    }
    return 0;
}

