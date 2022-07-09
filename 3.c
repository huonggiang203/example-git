#include<stdio.h>
void nhap(int a[], int n){

    for(int i=0; i<n; i++){
 
        printf("a[%d]: ",i);
 
        scanf("%d",&a[i]);
 
    }
 
}
void xuat(int a[], int n){
 
    printf("Mang vua nhap la hacked: \n");
 
    for(int i=0;i<n;i++){
 
        printf("%5d",a[i]);
 
    }
 
}
void tongchia5(int a[],int n)
{
    int tong=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]%5==0){
            tong=tong+a[i];
        }
    }
    printf("\ntong cac so trong mang chia het cho 5 %d \n",tong);
    
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    int a[n];
    nhap(a,n);
    xuat(a,n);
    tongchia5(a,n);
}