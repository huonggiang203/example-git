#include<stdio.h>
void nhapmang(int a[],int n){
    for(int i=0;i<n;i++){
        printf("nhap ptu a[%d]= : ",i);
        scanf("%d",&a[i]);
    }
}
void xuatmang(int a[],int n){
    for(int i=0;i<n;i++){
        printf("nhap gia tri a[%d]=%d\n",a[i]);
    }
}
int min(int a[],int n){
    int min=a[0];
    for(int i=1;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
        return min;
    }
}
int dequi(int a[],int n){
    if(n==1) return a[0];
    if(dequi(a,n-1)<a[n-1]) return a[n-1];
    else return dequi(a,n-1);
}
int main(){
    int a[1000];
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    nhapmang(a, n);
    printf("gia tri nho nhat trong mang : %d\n",min(a, n));
    printf("gia tri nho nhat trong mang : %d",dequi(a, n));
    return 0;

}
