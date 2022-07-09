#include<stdio.h>
int main(){
    int a;
    printf("nhap a : ");
    scanf("%d",&a);
    if(a<0){
        printf(" la so nguyen am");
    }
    if(a==0){
        printf("khong phai la so nguyen duong , khong phai la so nguyen am ");

    }
    else if(a>0){
        printf("la so nguyen duong ");}
    return 0;
}