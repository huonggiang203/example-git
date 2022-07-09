#include<stdio.h>
void nhapmang(int a[],int n){
    for(int i=0;i<n;i++){
        printf("nhap tu a[%d]=",i);
        scanf("%d",&a[i]);
    }
}
int tongcacptu(int a[],int n){
    int  sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}
int tongcacptudq(int a[],int n){
    if(n==0){
        return 0;
    }
    return a[n-1]+tongcacptudq(a,n-1);
}
int main(){
    int a[1000];
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    nhapmang(a, n);
    printf("tong cac ptu %d\n",tongcacptu(a, n));
    printf("tong cac phan tu %d",tongcacptudq(a, n));
}