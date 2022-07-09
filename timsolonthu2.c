#include<stdio.h>
void nhap(int a[], int n){

    for(int i=0; i<n; i++){
 
        printf("a[%d]: ",i);
 
        scanf("%d",&a[i]);
 
    }
 
}
void xuat(int a[], int n){
 
    printf("Mang vua nhap la: \n");
 
    for(int i=0;i<n;i++){
 
        printf("%5d",a[i]);
 
    }
 
}
void timsolonthu2(int a[],int n){
    int max=0;
    int max2;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max2=max;
            max=a[i];
        }
    }
    printf("\nso lon thu 2 trong mang la: %d",max2);
}
int main(){
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    int a[n];
    nhap(a,n);
    xuat(a,n);
    timsolonthu2(a,n);
}